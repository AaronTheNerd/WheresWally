// Written by Aaron Barge
// Copyright 2022

#include "utils.h"

bool atn::contains_value(std::map<char, atn::Color> key, atn::Color value) {
    for (auto it = key.begin(); it != key.end(); ++it) {
        if (it->second == value)
            return true;
    }
    return false;
}

std::vector<std::vector<atn::Color>> atn::apply(std::deque<std::string> test, std::map<char, atn::Color> key) {
    std::vector<std::vector<atn::Color>> result(test.size());
    for (size_t i = 0; i < test.size(); ++i) {
        std::vector<atn::Color> result_line;
        for (size_t j = 0; j < test[i].size(); ++j) {
            result_line.push_back(key[test[i][j]]);
        }
        result[i] = result_line;
    }
    return result;
}

std::ostream& operator<<(std::ostream& out, std::vector<std::vector<atn::Color>> target) {
    for (size_t y = 0; y < target.size(); ++y) {
        for (size_t x = 0; x < target[y].size(); ++x) {
            switch(target[y][x]) {
                case atn::BLACK:
                case atn::GREY:
                    out << "#";
                    break;
                case atn::RED:
                case atn::DARK_RED:
                    out << "%";
                    break;
                case atn::TAN:
                    out << "*";
                    break;
                default:
                    out << " ";
            }
        }
        out << std::endl;
    }
    return out;
}

std::ostream& operator<<(std::ostream& out, std::map<char, atn::Color> key) {
    out << "{ ";
    for (auto it = key.begin(); it != key.end(); ++it) {
        out << "'" << it->first << "' : " << it->second << ", ";
    }
    out << "}";
    return out;
}
