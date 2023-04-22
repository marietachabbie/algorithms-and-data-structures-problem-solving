/* The problem in leetcode:
https://leetcode.com/problems/problems/maximum-product-of-two-elements-in-an-array */

#ifndef problems_maximum_product_of_two_numbers_h
#define problems_maximum_product_of_two_numbers_h

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 2) { return (nums[0] - 1) * (nums[1] - 1); }
        sort(nums.begin(), nums.end());

        size_t last = nums.size() - 1;
        int lastTwo = (nums[last] - 1) * (nums[last - 1] - 1);
        int firstTwo = (nums[0] - 1) * (nums[1] - 1);
        if (firstTwo > lastTwo) {
            return firstTwo;
        } else {
            return lastTwo;
        }
    }
};

#endif
