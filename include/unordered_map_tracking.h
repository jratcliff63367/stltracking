#pragma once

#include <unordered_map>

#include "stl_tracking.h"

template <class Key, class Value, class Hash = std::hash<Key>, class KeyEqual = std::equal_to<Key>>
using unordered_map = std::unordered_map<Key, Value, Hash, KeyEqual, tracking_allocator<std::pair<Key, Value>>>;

