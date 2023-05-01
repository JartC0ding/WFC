#include <wfc.hpp>
#include <iostream>
using namespace std;

WFC::WFC(int seed, vector<int> &_grid) {
    this->grid = _grid; // will be procedurally generated
    this->grid[0] = seed;
}

int WFC::eval_next(int curr) {
    for (int i = 0; i < options.size(); i++) {
        // if option matches, return i
        if (options[i](this->grid, curr)) {
            return i;
        }
    }

    // no match throws -1, an error
    return -1;
}

vector<int> WFC::collapse() {
    for (int i = 1; i < this->grid.size(); i++) {
        this->grid[i] = (this->eval_next(i));
    }

    return this->grid;
}
