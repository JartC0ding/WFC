CC = clang++
CFLAGS = -Isrc/include -Wall -std=c++11

all: src/wfc.cpp
	$(CC) $(CFLAGS) -c src/wfc.cpp -o wfc
