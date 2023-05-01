#include "src/include/wfc.hpp"
#include <iostream>

vector<int> res(5);

bool c1(vector<int> &_res, int c_pos) {
    if (_res[c_pos-1] == 0) return true;
    return false;
}

bool c2(vector<int> &_res, int c_pos) {
    if (_res[c_pos-1] == 1) return true;
    return false;
}

int main(void) {
    cout << to_string(res.size()) << endl;

    WFC my_wfc(0, res);
    my_wfc.options.push_back(&c1);
    my_wfc.options.push_back(&c2);
    res = my_wfc.collapse();

    for (auto i : res) {
        cout << to_string(i) << endl;
    }
}
