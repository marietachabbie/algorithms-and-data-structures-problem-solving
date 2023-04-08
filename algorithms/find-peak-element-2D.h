/* The problem in leetcode:
https://leetcode.com/problems/find-a-peak-element-ii */

#ifndef find_peak_element_2D_h
#define find_peak_element_2D_h

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int startCol = 0; int endCol = mat[0].size() - 1;
        bool isLeftGreater = false; bool isRightGreater = false;
        int maxRow = 0; int midCol = 0;

        while (startCol <= endCol) {
            midCol = startCol + (endCol - startCol) / 2;

            for (int i = 0; i < mat.size(); i++) {
                maxRow = mat[i][midCol] >= mat[maxRow][midCol] ? i : maxRow;
            }

            isLeftGreater = midCol - 1 >= startCol && mat[maxRow][midCol - 1] > mat[maxRow][midCol];
            isRightGreater = midCol + 1 <= endCol && mat[maxRow][midCol + 1] > mat[maxRow][midCol];

            if (!isLeftGreater && !isRightGreater) {
                return { maxRow, midCol };
            } else if (isRightGreater && !isLeftGreater) {
                startCol = midCol + 1;
            } else {
                endCol = midCol - 1;
            }
        }

        return { -1, -1 };
    }
};

#endif
