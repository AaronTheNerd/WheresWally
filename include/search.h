// Written by Aaron Barge
// Copyright 2022

#ifndef _INCLUDE_SEARCH_H_
#define _INCLUDE_SEARCH_H_

#include <map>
#include <queue>
#include <string>
#include "wally.h"

namespace atn {

struct SearchResult {
    bool result = false; 
    size_t pos = 0;
    std::deque<std::string> test;
    std::map<char, atn::Color> key;
};

std::pair<bool, std::map<char, atn::Color>> match(atn::Wally, std::deque<std::string>, size_t, std::map<char, atn::Color>);
SearchResult search_pi(atn::Wally, size_t, std::string, std::map<char, atn::Color>);

} // namespace atn

#endif //_INCLUDE_SEARCH_H_
