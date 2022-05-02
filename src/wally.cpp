// Written by Aaron Barge
// Copyright 2022

#include "wally.h"

namespace {
    
using namespace atn;
std::vector<std::vector<Color>> init() {
    #ifdef CREEPER
    return std::vector<std::vector<Color>> {
        {  WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE},
        {  WHITE,   BLACK,   BLACK,   WHITE,   WHITE,   BLACK,   BLACK,   WHITE},
        {  WHITE,   BLACK,   BLACK,   WHITE,   WHITE,   BLACK,   BLACK,   WHITE},
        {  WHITE,   WHITE,   WHITE,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE},
        {  WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE},
        {  WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE},
        {  WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE},
        {  WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE}};
    #endif
    #ifdef DINOSAUR
    return std::vector<std::vector<Color>> {
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   BLACK,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE},
        {  WHITE,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,     ANY,     ANY},
        {  WHITE,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,     ANY,     ANY},
        {  WHITE,   BLACK,   WHITE,   WHITE,     ANY,     ANY,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   WHITE,   WHITE,     ANY,   WHITE,   BLACK,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   BLACK,   WHITE,     ANY,   WHITE,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   WHITE,   WHITE,     ANY,   WHITE,   WHITE,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY}};
    #endif
    #ifdef MARIO
    return std::vector<std::vector<Color>> {
        {    ANY,     ANY,     ANY,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY},
        {    ANY,     ANY,   BLACK,     RED,     RED,     RED,     RED,     RED,     RED,   BLACK,   BLACK,     ANY},
        {    ANY,   BLACK,     RED,     RED,     RED,     RED,     RED,     RED,     RED,     RED,     RED,   BLACK},
        {    ANY,   BLACK,   BLACK,   BLACK,     TAN,     TAN,   WHITE,     TAN,   BLACK,   BLACK,   BLACK,     ANY},
        {  BLACK,     TAN,     TAN,   BLACK,   BLACK,     TAN,   BLACK,     TAN,     TAN,     TAN,     TAN,   BLACK},
        {  BLACK,     TAN,     TAN,   BLACK,   BLACK,     TAN,     TAN,   BLACK,     TAN,     TAN,     TAN,   BLACK},
        {    ANY,   BLACK,   BLACK,     TAN,     TAN,     TAN,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY},
        {    ANY,     ANY,   BLACK,   BLACK,     TAN,     TAN,     TAN,     TAN,     TAN,   BLACK,     ANY,     ANY},
        {    ANY,   BLACK,     RED,     RED,     RED,   BLACK,     RED,     RED,   BLACK,     ANY,     ANY,     ANY},
        {  BLACK,     RED,     RED,     RED,     RED,   BLACK,   BLACK,     RED,     RED,   BLACK,     ANY,     ANY},
        {  BLACK,     RED,     RED,     RED,     RED,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY,     ANY},
        {    ANY,   BLACK,     TAN,     TAN,     TAN,   BLACK,   BLACK,   BLACK,   WHITE,   BLACK,     ANY,     ANY},
        {    ANY,   BLACK,     TAN,     TAN,     RED,     RED,     RED,   BLACK,   BLACK,   BLACK,     ANY,     ANY},
        {    ANY,     ANY,   BLACK,     RED,     RED,     RED,     RED,     RED,   BLACK,     ANY,     ANY,     ANY},
        {    ANY,     ANY,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY}};
    #endif
    #ifdef STAR
    return std::vector<std::vector<Color>> {
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   WHITE,   WHITE,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   WHITE,   WHITE,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY},
        {  BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK},
        {  BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK},
        {    ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,     ANY},
        {    ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,     ANY,     ANY},
        {    ANY,     ANY,     ANY,   BLACK,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   BLACK,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,     ANY,     ANY,     ANY},
        {    ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,     ANY,     ANY},
        {    ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,     ANY,     ANY},
        {    ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,     ANY},
        {    ANY,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,     ANY,     ANY,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,     ANY},
        {  BLACK,   WHITE,   WHITE,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   WHITE,   WHITE,   BLACK},
        {  BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   BLACK}};
    #endif
    #ifdef SUS
    return std::vector<std::vector<Color>> {
        {    ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,   BLACK,     RED,     RED,     RED,     RED,     RED,     RED,     RED,   BLACK,     ANY,     ANY},
        {    ANY,     ANY,     ANY,   BLACK,     RED,     RED,     RED,     RED,     RED,     RED,     RED,     RED,     RED,   BLACK,     ANY},
        {    ANY,     ANY,     ANY,   BLACK, DARK_RED,     RED,     RED,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY},
        {    ANY,     ANY,     ANY,   BLACK, DARK_RED,     RED,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK},
        {    ANY,   BLACK,   BLACK,   BLACK, DARK_RED,     RED,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK},
        {  BLACK,     RED,     RED,   BLACK, DARK_RED,     RED,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK},
        {  BLACK, DARK_RED,     RED,   BLACK, DARK_RED,     RED,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK},
        {  BLACK, DARK_RED, DARK_RED,   BLACK, DARK_RED,     RED,     RED,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY},
        {  BLACK, DARK_RED, DARK_RED,   BLACK, DARK_RED,     RED,     RED,     RED,     RED,     RED,     RED,     RED,     RED,   BLACK,     ANY},
        {  BLACK, DARK_RED, DARK_RED,   BLACK, DARK_RED, DARK_RED,     RED,     RED,     RED,     RED,     RED,     RED,     RED,   BLACK,     ANY},
        {  BLACK, DARK_RED, DARK_RED,   BLACK, DARK_RED, DARK_RED,     RED,     RED,     RED,     RED,     RED,     RED,     RED,   BLACK,     ANY},
        {  BLACK, DARK_RED, DARK_RED,   BLACK, DARK_RED, DARK_RED, DARK_RED,     RED,     RED,     RED,     RED,     RED, DARK_RED,   BLACK,     ANY},
        {  BLACK, DARK_RED, DARK_RED,   BLACK, DARK_RED, DARK_RED, DARK_RED, DARK_RED, DARK_RED, DARK_RED, DARK_RED, DARK_RED, DARK_RED,   BLACK,     ANY},
        {    ANY,   BLACK,   BLACK,   BLACK, DARK_RED, DARK_RED, DARK_RED,   BLACK,   BLACK,   BLACK,   BLACK, DARK_RED, DARK_RED,   BLACK,     ANY},
        {    ANY,     ANY,     ANY,   BLACK, DARK_RED, DARK_RED, DARK_RED,   BLACK,     ANY,   BLACK, DARK_RED, DARK_RED, DARK_RED,   BLACK,     ANY},
        {    ANY,     ANY,     ANY,   BLACK, DARK_RED, DARK_RED, DARK_RED,   BLACK,     ANY,   BLACK, DARK_RED, DARK_RED, DARK_RED,   BLACK,     ANY},
        {    ANY,     ANY,     ANY,   BLACK, DARK_RED, DARK_RED, DARK_RED,   BLACK,     ANY,   BLACK, DARK_RED, DARK_RED, DARK_RED,   BLACK,     ANY},
        {    ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY,   BLACK,   BLACK,   BLACK,     ANY,     ANY}};
    #endif
    #ifdef WALLY
    return std::vector<std::vector<Color>> {
        {    ANY,     ANY,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,   BLACK,     RED,     RED,     RED,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,   BLACK,     RED,     RED,     RED,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,   BLACK,   BLACK,     RED,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,     RED,     RED,   BLACK,     ANY,     ANY,     ANY,     ANY},
        {    ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,     RED,     RED,     RED,     RED,     RED,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK},
        {    ANY,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,     RED,     RED,     RED,     RED,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY},
        {    ANY,   BLACK,   WHITE,   BLACK,   BLACK,     RED,     RED,     RED,     RED,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK},
        {    ANY,   BLACK,   BLACK,     RED,     RED,     RED,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK},
        {  BLACK,     RED,     RED,     RED,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK},
        {  BLACK,     RED,     RED,   BLACK,   BLACK,   BLACK,   BLACK,     TAN,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK},
        {  BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     TAN,     TAN,     TAN,     TAN,     TAN,     TAN,     TAN,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY},
        {    ANY,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     TAN,     TAN,     TAN,   BLACK,   BLACK,   BLACK,     TAN,   BLACK,   BLACK,   BLACK,     ANY},
        {    ANY,   BLACK,     TAN,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,     TAN,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,     TAN,     TAN,   BLACK,     ANY},
        {    ANY,   BLACK,     TAN,     TAN,   BLACK,   WHITE,   BLACK,   WHITE,   BLACK,   BLACK,   BLACK,   WHITE,   BLACK,   WHITE,   BLACK,     TAN,     TAN,   BLACK,     ANY},
        {    ANY,   BLACK,     TAN,     TAN,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,     TAN,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,     TAN,     TAN,   BLACK,     ANY},
        {    ANY,     ANY,   BLACK,   BLACK,     TAN,   BLACK,   BLACK,   BLACK,     TAN,     TAN,     TAN,   BLACK,   BLACK,   BLACK,     TAN,   BLACK,   BLACK,     ANY,     ANY},
        {    ANY,     ANY,     ANY,   BLACK,     TAN,     TAN,     TAN,     TAN,     TAN,     TAN,   BLACK,     TAN,     TAN,     TAN,     TAN,   BLACK,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,   BLACK,     TAN,     TAN,     TAN,     TAN,   BLACK,   BLACK,   BLACK,     TAN,     TAN,     TAN,     TAN,   BLACK,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,   BLACK,     TAN,   BLACK,     TAN,     TAN,     TAN,     TAN,     TAN,   BLACK,     TAN,   BLACK,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,   BLACK,     TAN,     TAN,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     TAN,     TAN,   BLACK,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,     TAN,     TAN,     TAN,     TAN,     TAN,     TAN,     TAN,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,     TAN,     TAN,     TAN,     TAN,     TAN,     TAN,     TAN,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,     TAN,     TAN,     TAN,     TAN,     TAN,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY}};
    #endif
    #ifdef LIL_SUS
    return std::vector<std::vector<Color>> {
        {  WHITE,   BLACK,   BLACK,   BLACK},
        {  BLACK,   BLACK,   WHITE,   WHITE},
        {  BLACK,   BLACK,   BLACK,   BLACK},
        {  WHITE,   BLACK,   WHITE,   BLACK}};
    #endif
    #ifdef SMILE
    return std::vector<std::vector<Color>> {
        {    ANY,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,     ANY},
        {    ANY,   WHITE,   BLACK,   WHITE,   WHITE,   BLACK,   WHITE,     ANY},
        {    ANY,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,     ANY},
        {  WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE},
        {  WHITE,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   WHITE},
        {  WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE},
        {    ANY,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,     ANY}};
    #endif
    #ifdef LIL_SUS_RED
    return std::vector<std::vector<Color>> {
        {  BLACK,     RED,     RED,     RED,   BLACK},
        {DARK_RED,     RED,   WHITE,   WHITE,   WHITE},
        {DARK_RED, DARK_RED,   WHITE,   WHITE,   WHITE},
        {DARK_RED, DARK_RED,     RED,     RED,   BLACK},
        {  BLACK, DARK_RED,   BLACK,     RED,   BLACK}};
    #endif
    #ifdef ALIEN
    return std::vector<std::vector<Color>> {
        {    ANY,     ANY,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY,   BLACK,   BLACK,   BLACK,     ANY,     ANY},
        {    ANY,     ANY,   BLACK,   WHITE,   BLACK,   BLACK,     ANY,   BLACK,   BLACK,   WHITE,   BLACK,     ANY,     ANY},
        {    ANY,     ANY,   BLACK,   BLACK,   WHITE,   BLACK,   BLACK,   BLACK,   WHITE,   BLACK,   BLACK,     ANY,     ANY},
        {    ANY,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,     ANY},
        {  BLACK,   BLACK,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   BLACK,   BLACK},
        {  BLACK,   WHITE,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   WHITE,   BLACK},
        {  BLACK,   WHITE,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   WHITE,   BLACK},
        {  BLACK,   BLACK,   BLACK,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   BLACK,   BLACK,   BLACK},
        {    ANY,     ANY,   BLACK,   BLACK,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,   BLACK,   BLACK,     ANY,     ANY},
        {    ANY,     ANY,     ANY,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY}};
    #endif
    #ifdef DINOSAUR_LITE
    return std::vector<std::vector<Color>> {
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,     ANY,     ANY,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE},
        {    ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,     ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE},
        {  WHITE,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,     ANY,     ANY,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,     ANY,     ANY},
        {  WHITE,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,     ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   WHITE,     ANY,     ANY},
        {  WHITE,   BLACK,   WHITE,   WHITE,     ANY,     ANY,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,     ANY,     ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   WHITE,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,     ANY,   BLACK,   BLACK,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   WHITE,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {  WHITE,   WHITE,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,   WHITE,   WHITE,   BLACK,   BLACK,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,   BLACK,   BLACK,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,     ANY,     ANY,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   BLACK,   BLACK,   WHITE,   WHITE,   WHITE,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   WHITE,   WHITE,     ANY,   WHITE,   BLACK,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   BLACK,   BLACK,   WHITE,     ANY,   WHITE,   BLACK,   BLACK,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY},
        {    ANY,     ANY,     ANY,     ANY,     ANY,   WHITE,   WHITE,   WHITE,   WHITE,     ANY,   WHITE,   WHITE,   WHITE,   WHITE,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY,     ANY}};
    #endif
    #ifdef STICK_MAN
    return std::vector<std::vector<Color>> {
        {    ANY,     ANY,   WHITE,   WHITE,   WHITE,     ANY,     ANY},
        {    ANY,   WHITE,   BLACK,   BLACK,   BLACK,   WHITE,     ANY},
        {  WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE},
        {  WHITE,   BLACK,   BLACK,   BLACK,   BLACK,   BLACK,   WHITE},
        {    ANY,   WHITE,   BLACK,   BLACK,   BLACK,   WHITE,     ANY},
        {    ANY,     ANY,   WHITE,   BLACK,   WHITE,     ANY,     ANY},
        {    ANY,   WHITE,   BLACK,   BLACK,   BLACK,   WHITE,     ANY},
        {  WHITE,   BLACK,   WHITE,   BLACK,   WHITE,   BLACK,   WHITE},
        {    ANY,   WHITE,   WHITE,   BLACK,   WHITE,   WHITE,     ANY},
        {    ANY,   WHITE,   BLACK,   WHITE,   BLACK,   WHITE,     ANY},
        {  WHITE,   BLACK,   WHITE,     ANY,   WHITE,   BLACK,   WHITE},
        {    ANY,   WHITE,     ANY,     ANY,     ANY,   WHITE,     ANY}};
    #endif
}

} // anonymous namespace

atn::Wally::Wally() : wally(init()) {}

size_t atn::Wally::width() const {
    return this->wally[0].size();
}

size_t atn::Wally::height() const {
    return this->wally.size();
}
