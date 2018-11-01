#pragma once

#include "stl_tracking.h"

#include <vector>

template <class T>
using vector = std::vector<T, tracking_allocator<T>>;
