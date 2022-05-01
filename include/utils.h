// Written by Aaron Barge
// Copyright 2022

#ifndef _INCLUDE_UTILS_H_
#define _INCLUDE_UTILS_H_

#include <map>
#include <queue>
#include <string>
#include <vector>
#include "wally.h"

namespace atn {

bool contains_value(std::map<char, atn::Color>, atn::Color);
std::vector<std::vector<atn::Color>> apply(std::deque<std::string>, std::map<char, atn::Color>);

} // namespace atn

std::ostream& operator<<(std::ostream&, std::vector<std::vector<atn::Color>>);
std::ostream& operator<<(std::ostream&, std::map<char, atn::Color>);

#endif //_INCLUDE_UTILS_H_
