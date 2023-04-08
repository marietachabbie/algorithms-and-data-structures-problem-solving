/* The problem in leetcode:
https://leetcode.com/problems/peak-index-in-a-mountain-array */

#ifndef mountain_array_h
#define mountain_array_h

class Solution {
public:
    int binarySearch (int begin, int end, vector<int>& arr) {
        if (begin == end) {
            return begin;
        }

        int mid = (begin + end) / 2;
        if (arr[mid] < arr[mid + 1]) {
            return binarySearch(mid + 1, end, arr);
        } else {
            return binarySearch(begin, mid, arr);
        }
    }

    int peakIndexInMountainArray(vector<int>& arr) {
        int arrSize = static_cast<int>(arr.size());
        if (arrSize < 3) {
            return -1;
        }

        return binarySearch(0, arrSize - 1, arr);
    }
};

#endif
