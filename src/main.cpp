// Written by Aaron Barge
// Copyright 2022

#include "wally.h"
#include "search.h"
#include "utils.h"

#include <iostream>

int main(int argc, char **argv) {
    atn::Wally target;
    std::map<char, atn::Color> key {
        {'0', atn::ANY},
        {'1', atn::ANY},
        {'2', atn::ANY},
        {'3', atn::ANY}
    };
    std::cout << target.wally << std::endl;
    for (size_t width = target.width(); width < 100; ++width) {
        atn::SearchResult search_result = atn::search_pi(target, width, "data/pi_bin_1b.txt", key);
        if (search_result.result) {
            std::cout << "Test succeeded!" << std::endl;
            std::cout << "  Width: " << width << std::endl;
            std::cout << "  Position: " << search_result.pos << std::endl;
            std::cout << "  Key: " << search_result.key << std::endl;
            std::cout << "  Test:" << std::endl << atn::apply(search_result.test, search_result.key) << std::endl;
            return 0;
        } else {
            std::cout << "Test failed: " << std::endl;
            std::cout << "  Width: " << width << std::endl;
        }
    }
    return 0;
}
