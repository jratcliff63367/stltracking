#pragma once

#include <cstdlib>
#include <scoped_allocator>
#include <stdio.h>

template <class T>
class tracking_allocator_base
{
public:
    using value_type = T;

    tracking_allocator_base() = default;

    template <class U>
    tracking_allocator_base(const tracking_allocator_base<U>& ) {}

    T *allocate(std::size_t size)
    {
        printf("Track alloc... %zu\n", size);
        return reinterpret_cast<T*>(std::malloc(sizeof(T)*size));
    }

    void deallocate(T * p, std::size_t )
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
