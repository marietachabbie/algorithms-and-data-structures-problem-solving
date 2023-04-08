#include <iostream>
#include <vector>
using namespace std;

#include "mountain-array.h"

int main(int argc, const char * argv[]) {
    Solution solution;
    
    vector<int> input = { 3,5,3,2,0 };
    int res = solution.peakIndexInMountainArray(input);

    return 0;
}
