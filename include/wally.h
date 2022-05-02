// Written by Aaron Barge
// Copyright 2022

# ifndef _INCLUDE_WALLY_H_
# define _INCLUDE_WALLY_H_

#include <iostream>
#include <vector>

namespace atn {

enum Color { RED, WHITE, BLACK, TAN, GREY, DARK_RED, ANY };

class Wally {
  public:
    const std::vector<std::vector<Color>> wally;
    Wally();
    size_t width() const;
    size_t height() const;
};

} // namespace atn

#endif //_INCLUDE_WALLY_H_
