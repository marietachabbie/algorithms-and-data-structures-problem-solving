/* The problem in leetcode:
https://leetcode.com/problems/maximum-product-of-three-numbers */

#ifndef maximum_product_of_three_numbers_h
#define maximum_product_of_three_numbers_h

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if (nums.size() == 3) {
            return nums[0] * nums[1] * nums[2];
        }
        sort(nums.begin(), nums.end());
        size_t last = nums.size() - 1;
        int firstTwoOneLast = nums[0] * nums[1] * nums[last];
        int threeLast = nums[last] * nums[last - 1] * nums[last - 2];

        if (firstTwoOneLast > threeLast) {
            return firstTwoOneLast;
        } else {
            return threeLast;
        }
    }
};

#endif
