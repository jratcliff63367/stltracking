#pragma once

#include "stl_tracking.h"

template <class CharT, class Traits = std::char_traits<CharT>>
using basic_string = std::basic_string<CharT, Traits, tracking_allocator<CharT>>;

using string = basic_string<char>;
