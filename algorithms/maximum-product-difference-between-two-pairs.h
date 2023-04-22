/* The problem in leetcode:
https://leetcode.com/problems/maximum-product-difference-between-two-pairs */

#ifndef maximum_product_difference_between_two_pairs_h
#define maximum_product_difference_between_two_pairs_h

class Solution {
public:
    int maxProductOfTwo(vector<int>& nums, size_t last, bool& isFirst) {
        int lastTwo = nums[last] * nums[last - 1];
        int firstTwo = nums[0] * nums[1];
        if (firstTwo > lastTwo) {
            isFirst = true;
            return firstTwo;
        } else {
            return lastTwo;
        }
    }

    int minPositiveProduct(vector<int>& nums, int idx) {
        int i = idx + 2;
        while(i < nums.size()) {
            if (nums[i] > 0) {
                return nums[i - 1] * nums[i - 2];
            }

            i++;
        }
        return 0;
    };

    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        size_t last = nums.size() - 1;
        bool isFirst = false;
        if (nums.size() == 4) {
            return (nums[last] * nums[last - 1]) - (nums[0] * nums[1]);
        }

        int maxProduct = maxProductOfTwo(nums, last, isFirst);
        int minProduct = 0;
        if (isFirst) {
            minProduct = minPositiveProduct(nums, 2);
        } else {
            minProduct = minPositiveProduct(nums, 0);
        }

        return maxProduct - minProduct;
    }
};

#endif
