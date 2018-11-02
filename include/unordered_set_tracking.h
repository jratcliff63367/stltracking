#pragma once

// Defines the stdt::unordered_set container 

#include <unordered_set>

#include "stl_tracking.h"

namespace stdt
{

#if USE_STL_TRACKING
    template <class Key, class Hash = std::hash<Key>, class KeyEqual = std::equal_to<Key>>
    using unordered_set = std::unordered_set<Key, Hash, KeyEqual, tracking_allocator<Key>>;
#else
    template <class Key, class Hash = std::hash<Key>, class KeyEqual = std::equal_to<Key>>
    using unordered_set = std::unordered_set<Key, Hash, KeyEqual>;
#endif
}
