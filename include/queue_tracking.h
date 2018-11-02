#pragma once

// Defines the stdt::queue container 

#include "stl_tracking.h"

#include <queue>
#include <deque>

namespace stdt
{
#if USE_STL_TRACKING
    template <class T>
    using deque = std::deque<T, tracking_allocator<T>>;

    template <class T>
    using queue = std::queue<T, deque<T>>;
#else
    template <class T>
    using deque = std::deque<T>;

    template <class T>
    using queue = std::queue<T, deque<T>>;

#endif

}
