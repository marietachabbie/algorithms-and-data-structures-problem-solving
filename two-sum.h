/* The problem in leetcode:
https://leetcode.com/problems/two-sum */

#ifndef two_sum_h
#define two_sum_h

#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, vector<int>> numsIndices;
        int diff;

        for (int i = 0; i < nums.size(); i++) {
            numsIndices[nums[i]].push_back(i);
        }

        for (auto pair : numsIndices) {
            diff = target - pair.first;
            if (diff == pair.first && pair.second.size() > 1) {
                result = { pair.second[0], pair.second[1] };
                break;
            } else if (numsIndices.find(diff) != numsIndices.end()) {
                result = { pair.second[0], numsIndices[diff][0] };
                break;
            }
        }

        return result;
    }
};

#endif
