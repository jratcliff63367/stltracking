#pragma once

#include "stl_tracking.h"

#include <string>

namespace stdt
{

#if USE_STL_TRACKING
    template <class CharT, class Traits = std::char_traits<CharT>>
    using basic_string = std::basic_string<CharT, Traits, tracking_allocator<CharT>>;
    using string = basic_string<char>;
#else
    template <class CharT, class Traits = std::char_traits<CharT>>
    using basic_string = std::basic_string<CharT, Traits>;
    using string = basic_string<char>;
#endif

}

namespace std
{

template<> struct hash<stdt::string>
{
public:
	size_t operator()(const stdt::string &str) const
        {
                size_t hash = 0;
                for(auto c : str)
                {
			hash = hash * 31 + c;
                }
                return hash;
        }
};

}
