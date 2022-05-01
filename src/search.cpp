// Written by Aaron Barge
// Copyright 2022

#include <fstream>
#include <string>
#include <vector>
#include "search.h"
#include "utils.h"

std::pair<bool, std::map<char, atn::Color>> atn::match(atn::Wally target, std::deque<std::string> test, size_t dx, std::map<char, atn::Color> key) {
    for (size_t y = 0; y < target.wally.size(); ++y) {
        for (size_t x = 0; x < target.wally[y].size(); ++x) {
            if (target.wally[y][x] == atn::ANY || key[test[y][x + dx]] == target.wally[y][x]) {
                continue;
            } else if (key[test[y][x + dx]] != atn::ANY) {
                return std::make_pair(false, key);
            } else {
                key[test[y][x + dx]] = target.wally[y][x];
            }
        }
    }
    return std::make_pair(true, key);
}

atn::SearchResult atn::search_pi(atn::Wally target, size_t width, std::string filename, std::map<char, atn::Color> key) {
    // Verify that width is wide enough
    size_t target_width = target.width();
    if (width < target_width)
    {
        std::cerr << "Width too small to search for Wally." << std::endl;
        exit(-1);
    }
    size_t x_range = width - target_width + 1;
    size_t pos = 0;
    std::deque<std::string> test(target.height(), "");
    std::string new_line(width, '\0');
    std::pair<bool, std::map<char, atn::Color>> match_result;
    // Open file
    if (std::ifstream file{filename}) {
        // Fill test deque
        while (test[1] == "" && file.read(&new_line[0], width)) {
            test.pop_front();
            test.push_back(new_line);
        }
        // Test pi
        while (file.read(&new_line[0], width)) {
            test.pop_front();
            test.push_back(new_line);
            for (size_t dx = 0; dx < x_range; ++dx) {
                if ((match_result = match(target, test, dx, key)).first) {
                    return {true, pos + dx, test, match_result.second};
                }
            }
            pos += width;
        }
        // Failed to find Wally :(
            file.close();
        return {false, 0, test, key};
    } else {
        std::cerr << "File failed to open." << std::endl;
        exit(-1);
    }
    
}
