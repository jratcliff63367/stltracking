#pragma once

#include "stl_tracking.h"

#include <queue>
#include <deque>

template <class T>
using deque = std::deque<T, tracking_allocator<T>>;

template <class T>
using queue = std::queue<T, deque<T>>;
