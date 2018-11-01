#pragma once
#include <map>

#include "stl_tracking.h"

template <class Key, class Value, class Compare = std::less<Key>>
using map = std::map<Key, Value, Compare, tracking_allocator<std::pair<Key, Value>>>;
