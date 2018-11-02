#pragma once
#include <map>

#include "stl_tracking.h"

namespace stdt
{

#if USE_STL_TRACKING
    template <class Key, class Value, class Compare = std::less<Key>>
    using map = std::map<Key, Value, Compare, tracking_allocator<std::pair<Key, Value>>>;
#else
    template <class Key, class Value, class Compare = std::less<Key>>
    using map = std::map<Key, Value, Compare>;
#endif
}