/* The problem in leetcode:
https://leetcode.com/problems/remove-element */

#ifndef remove_element_h
#define remove_element_h

class Solution {
public:
    int lastUnequal(vector<int>& nums, int j, int val) {
        while(j >= 0 && nums[j] == val) { j--; }
        return j;
    }

    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) {
            return 0;
        }

        int j =  nums.size() - 1;
        for (int i = 0; i <= j; i++) {
            if (nums[i] == val) {
                j = lastUnequal(nums, j, val);

                if (j < i) {
                    return i;
                }
                swap(nums[i], nums[j]);
            } else if (i == j) {
                return i + 1;
            }
        }

        return j;
    }
};

#endif
