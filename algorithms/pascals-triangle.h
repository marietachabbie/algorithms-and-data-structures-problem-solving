/* The problem in leetcode:
https://leetcode.com/problems/pascals-triangle */

#ifndef pascals_triangle_h
#define pascals_triangle_h

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result = {{ 1 }};
        for (int i = 1; i < numRows; i++) {
            vector<int> row = { 1 };
            for (int j = 1; j < result[i - 1].size(); j++) {
                row.push_back(result[i - 1][j] + result[i - 1][j - 1]);
            }
            row.push_back(1);
            result.push_back(row);
        }

        return result;
    }
};

#endif
