#include <iostream>
#include <vector>
using namespace std;

#include "find-peak-2d.h"

int main(int argc, const char * argv[]) {
    Solution solution;
    
    vector<vector<int>> input = {
        {10,20,15},{21,30,14},{7,16,32}
    };
    vector<int> res = solution.findPeakGrid(input);
//    cout << "~~~~" << res << "~~~~" << endl;

    return 0;
}
