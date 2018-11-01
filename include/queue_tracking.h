#pragma once

#include "stl_tracking.h"

#include <queue>

template <class T>
using queue = std::queue<T, tracking_allocator<T>>;
