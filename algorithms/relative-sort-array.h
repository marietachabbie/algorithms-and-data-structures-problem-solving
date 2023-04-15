#ifndef relative_sort_array_h
#define relative_sort_array_h

/* The problem in leetcode:
https://leetcode.com/problems/relative-sort-array */

class Solution {
public:
    void assignFirstPart(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
        for (size_t i = 0; i < arr2.size(); i++) {
            for(size_t j = 0; j < arr1.size(); j++) {
                if (arr2[i] == arr1[j]) {
                    res.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }
        }
    }

    void assignSecondPart (vector<int>& arr, vector<int>& res) {
        int min = 1000; int idx = 0;
        size_t arrSize = arr.size();

        while (res.size() != arrSize) {
            for (size_t i = 0; i < arrSize; i++) {
                if (arr[i] != -1 && arr[i] <= min) {
                    min = arr[i];
                    idx = i;
                }
            }

            res.push_back(min);
            arr[idx] = -1;
            min = 1000; idx = 0;
        }
    }

    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        assignFirstPart(arr1, arr2, res);
        assignSecondPart(arr1, res);
        return res;
    }
};

#endif
