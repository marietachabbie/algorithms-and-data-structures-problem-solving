/* The problem in leetcode:
https://leetcode.com/problems/remove-duplicates-from-sorted-array */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0; int last = nums[idx];
        for (int i = 1; i < nums.size(); i++) {
            if (last < nums[i]) {
                if (i - idx > 1) {
                    nums[idx + 1] = nums[i];
                }
                last = nums[i];
                idx++;
            }
        }

        return ++idx;
    }
};
