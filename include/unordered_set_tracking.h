#pragma once

#include <unordered_set>

#include "stl_tracking.h"

template <class Key, class Hash = std::hash<Key>, class KeyEqual = std::equal_to<Key>>
using unordered_set = std::unordered_set<Key, Hash, KeyEqual, tracking_allocator<Key>>;

