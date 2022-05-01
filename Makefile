# Written by Aaron Barge
# Copyright 2022


# File Structure
SRC_DIR := src
INC_DIR := include
BLD_DIR := build
INC_H := $(wildcard $(INC_DIR)/*.h)
INC_O := $(patsubst $(INC_DIR)/%.h,$(BLD_DIR)/%.o, $(INC_H))
INC_DBG_O := $(patsubst $(INC_DIR)/%.h,$(BLD_DIR)/%_dbg.o, $(INC_H))


# Build Flags
CC := g++
CFLAGS := -Wall
DBGFLAG := -g
OPTFLAG := -O3
INCFLAG := -I $(INC_DIR)
TARGET := main
DBG_TARGET := dbg

# Image to Search
IMAGE := WALLY


# Rules
all: $(TARGET)

$(TARGET): $(BLD_DIR)/$(TARGET).o $(INC_O)
	$(CC) $(CFLAGS) $(OPTFLAG) -o $@ $^

$(BLD_DIR)/$(TARGET).o: $(SRC_DIR)/$(TARGET).cpp
	$(CC) $(CFLAGS) $(OPTFLAG) $(INCFLAG) -D $(IMAGE) -c $< -o $@

$(BLD_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_DIR)/%.h
	$(CC) $(CFLAGS) $(OPTFLAG) $(INCFLAG) -D $(IMAGE) -c $< -o $@

$(DBG_TARGET): $(BLD_DIR)/$(TARGET)_dbg.o $(INC_DBG_O)
	$(CC) $(CFLAGS) $(DBGFLAG) -o $@ $^

$(BLD_DIR)/$(TARGET)_dbg.o: $(SRC_DIR)/$(TARGET).cpp
	$(CC) $(CFLAGS) $(DBGFLAG) $(INCFLAG) -c $< -o $@

$(BLD_DIR)/%_dbg.o: $(SRC_DIR)/%.cpp $(INC_DIR)/%.h
	$(CC) $(CFLAGS) $(DBGFLAG) $(INCFLAG) -c $< -o $@

clean:
	$(RM) $(BLD_DIR)/* $(TARGET) $(DBG_TARGET)