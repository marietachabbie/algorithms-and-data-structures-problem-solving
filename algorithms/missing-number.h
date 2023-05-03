/* The problem in leetcode:
https://leetcode.com/problems/missing-number */

#ifndef missing_number_h
#define missing_number_h

class Solution {
private:
    int sumOf0ToN(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        return sum;
    }

    int sumOfAllNumbers(vector<int>& vec) {
        int sum = 0;
        for (auto num : vec) {
            sum += num;
        }

        return sum;
    }

public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int target = sumOf0ToN(n);
        int sum = sumOfAllNumbers(nums);
        return target - sum;
    }
};

#endif
