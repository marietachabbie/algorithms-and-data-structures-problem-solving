/* The problem in leetcode:
https://leetcode.com/problems/plus-one */

#ifndef plus_one_h
#define plus_one_h

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        size_t size = digits.size();
        vector<int> result(size);
        int j = size - 1;
        int coef = 1;

        for (int i = digits.size() - 1; i >= 0; i--) {
            int num = digits[i] + coef;
            result[j] = num % 10;
            coef = num / 10;
            j--;
        }

        if (coef != 0) {
            result.insert(result.begin(), coef);
        }

        return result;
    }
};

#endif
