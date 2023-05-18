/* The problem in leetcode:
https://leetcode.com/problems/move-zeroes */

#ifndef move_zeroes_h
#define move_zeroes_h

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> nonzeros;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nonzeros.push_back(i);
            }
        }

        int j = 0;
        for (int i = 0; i < nums.size() && j < nonzeros.size(); i++) {
            if (nums[i] == 0) {
                while (j < nonzeros.size() && nonzeros[j] <= i) {
                    j++;
                }

                if (j < nonzeros.size()) {
                    swap(nums[i], nums[nonzeros[j]]);
                    nonzeros[j] = -1;
                }
            }
        }
    }
};

#endif
