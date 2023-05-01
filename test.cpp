#include "src/include/wfc.hpp"
#include <iostream>

// function for the first possible quantum
bool c1(vector<int> &_res, int c_pos) {
    if (_res[c_pos-1] == 0) return true; // if the previous was 0
    return false;
}

// function for the second possivle quantum
bool c2(vector<int> &_res, int c_pos) {
    if (_res[c_pos-1] == 1) return true; // if the previous was 1
    return false;
}

int main(void) {
    vector<int> res(5); // result vector
    cout << to_string(res.size()) << endl;

    WFC my_wfc(0, res);
    my_wfc.options.push_back(&c1); // add quantum 1
    my_wfc.options.push_back(&c2); // add quantum 2
    res = my_wfc.collapse();

    for (auto i : res) {
        cout << to_string(i) << endl;
    }
}
