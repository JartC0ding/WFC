# Simple Wave Functio Collaps (WFC) library

A simple easy to use WFC library for procedural generation

## Usage

    git clone <repo>

    cd <repo>

    make

    clang++ test.cpp wfc

    ./a.out

## Library usage

The library exposes a single class: WFC. WFC takes some seeding value, and a grid that should be altered and returned, for each value there is a corresponding rule in the array exposed by WFC. WFC then proceduraly generates all values in the grid by executing all possible functions to validate a number. The first function that satisfies will return it's index which is the solution. This can be seen in the test.cpp file
    
