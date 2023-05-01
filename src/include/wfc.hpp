#ifndef WFC_H
#include <vector>

using namespace std;

typedef bool(*is_possible)(vector<int>&,int);


class WFC {
    private:
        int eval_next(int curr);
        vector<int> grid;

    public:
        vector<is_possible> options; // all possible options for a cell
        WFC(int seed, vector<int> &_grid);
        vector<int> collapse();
};

#endif // !WFC_H
