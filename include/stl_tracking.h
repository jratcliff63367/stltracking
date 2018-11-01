#pragma once

#include <cstdlib>
#include <scoped_allocator>
#include <stdio.h>

template <class T>
class tracking_allocator_base
{
public:
    using value_type = T;

    T *allocate(std::size_t size)
    {
        printf("Track alloc...\n");
        return reinterpret_cast<T*>(std::malloc(sizeof(T)*size));
    }

    void deallocate(T * p, std::size_t n)
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
