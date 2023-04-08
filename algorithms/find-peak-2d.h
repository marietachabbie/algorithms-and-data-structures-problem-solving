//
//

#ifndef find_peak_2d_h
#define find_peak_2d_h

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

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        for (int i = 0; i < mat.size(); i++) {
            int peakIndex = binarySearch(0, mat[i].size() - 1, mat[i]);
            if (i == 0 && mat[i][peakIndex] > mat[i + 1][peakIndex]) {
                cout << "First" << endl;
                return { i, peakIndex };
                cout << "Firs 2t" << endl;
            }

//            if (peakIndex == 1) {
//                return { 3, 3 };
//            }
            if (i == mat.size() - 1 && mat[i][peakIndex] > mat[i - 1][peakIndex]) {
                cout << "Second" << endl;
                return { i, peakIndex };
            }

            cout << "i is: " << i << endl;
            cout << "peakIndex is: " << peakIndex << endl;

            if (mat[i][peakIndex] > mat[i - 1][peakIndex] && mat[i][peakIndex] > mat[i + 1][peakIndex]) {
                cout << "Third" << endl;
                return { i, peakIndex };
            }
        }

        return { 0, 0 };
    }
};

#endif
