#pragma once
#include <set>

// Defines the stdt::set container 

#include "stl_tracking.h"

namespace stdt
{

#if USE_STL_TRACKING
    template <class Key, class Compare = std::less<Key>>
    using set = std::set<Key, Compare, tracking_allocator<Key>>;
#else
    template <class Key, class Compare = std::less<Key>>
    using set = std::set<Key, Compare>;
#endif
}
