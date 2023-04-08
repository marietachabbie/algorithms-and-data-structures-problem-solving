/* The problem in leetcode:
https://leetcode.com/problems/binary-search */

#ifndef binary_search_h
#define binary_search_h

class Solution {
public:
    int binarySearch (int begin, int end, int target, vector<int>& nums) {
        int mid = begin + (end - begin) / 2;
        if (begin > end) {
            return -1;
        }
        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] < target) {
            return binarySearch(mid + 1, end, target, nums);
        } else {
            return binarySearch(begin, mid - 1, target, nums);
        }
    }

    int search(vector<int>& nums, int target) {
        int numSize = static_cast<int>(nums.size());
        return binarySearch(0, numSize - 1, target, nums);
    }
};

#endif
