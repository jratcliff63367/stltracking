#pragma once

// Defines the stdt::string container 

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

// Note: Since the memory tracking version of std::string is a different class, this
// means we need to provide a hash function for stdt::string if you want to use it
// as a key for hash containers.
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
