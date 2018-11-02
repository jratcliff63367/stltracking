#pragma once

// Defines the stdt::list container 

#include "stl_tracking.h"

#include <list>

namespace stdt
{

#if USE_STL_TRACKING
    template <class T>
    using list = std::list<T, tracking_allocator<T>>;
#else
    template <class T>
    using list = std::list<T>;
#endif

}
