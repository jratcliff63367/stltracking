#pragma once

// This header files defines a custom allocator of the STL that you can use to intercept
// all memory allocations.  You can track the memory, call a custom memory allocator,
// whatever you see fit.
//
// Tracking versions of the STL containers are all in the 'stdt' namespace
//
// This sample code was created by Chris Dannemiller and John W. Ratcliff
// The official github location is here:
//
// https://github.com/jratcliff63367/stltracking
//
// You can contact John W. Ratcliff at mailto:jratcliffscarab@gmail.com

// To completely disable the STL tracking version of the containers just change USE_STL_TRACKING to 0
//
#ifdef _MSC_VER
#define USE_STL_TRACKING 1
#else
#define USE_STL_TRACKING 1
#endif

#if USE_STL_TRACKING
#include <cstdlib>
#include <scoped_allocator>
#include <stdio.h>


namespace stdt
{

    template <class T>
    class tracking_allocator_base
    {
    public:
        using value_type = T;

        tracking_allocator_base() = default;

        template <class U>
        tracking_allocator_base(const tracking_allocator_base<U>&) {}

        bool operator==(const tracking_allocator_base &) const
        {
            return true;
        }

        // Insert your own memory allocator and custom tracking code here
        // Any memory allocation done by any STL container in the 'stdt' namespace
        // will allocate from here
        T *allocate(std::size_t size)
        {
            printf("Track alloc... %zu\n", size);
            return reinterpret_cast<T*>(std::malloc(sizeof(T)*size));
        }

        void deallocate(T * p, std::size_t)
        {
            if (p != nullptr)
            {
                printf("Track free...\n");
                std::free(p);
            }
        }
    };

    template <class Type> using tracking_allocator =
        ::std::scoped_allocator_adaptor<tracking_allocator_base<Type>>;
} // end of stdt namespace
#endif
