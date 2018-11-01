#pragma once

#include "stl_tracking.h"

#include <list>

template <class T>
using list = std::list<T, tracking_allocator<T>>;
