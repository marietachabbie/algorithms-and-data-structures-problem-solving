/* The problem in leetcode:
https://leetcode.com/problems/single-number */

#ifndef single_number_h
#define single_number_h

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (auto num : nums) {
            res ^= num;
        }

        return res;
    }
};

#endif
