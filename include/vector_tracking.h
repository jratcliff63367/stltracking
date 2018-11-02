#pragma once

#include "stl_tracking.h"

#include <vector>

namespace stdt
{

#if USE_STL_TRACKING
    template <class T>
    using vector = std::vector<T, tracking_allocator<T>>;
#else
    template <class T>
    using vector = std::vector<T>;
#endif

}
