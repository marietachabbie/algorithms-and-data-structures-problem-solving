/* The problem in leetcode:
https://leetcode.com/problems/find-peak-element */

#ifndef find_peak_element_h
#define find_peak_element_h

#include <vector>
using namespace std;

class Solution {
public:
    int binarySearch (int start, int end, vector<int>& nums) {
        if (start == end) {
            return start;
        }

        int mid = (start + end) / 2;
        int next = mid + 1;
        if (nums[mid] > nums[next]) {
            return binarySearch(start, mid, nums);
        } else {
            return binarySearch(next, end, nums);
        }
    }

    int findPeakElement(vector<int>& nums) {
        return binarySearch(0, nums.size() - 1, nums);
    }
};

#endif
