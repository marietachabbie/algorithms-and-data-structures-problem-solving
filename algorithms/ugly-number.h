/* The problem in leetcode:
https://leetcode.com/problems/ugly-number */

#ifndef ugly_number_h
#define ugly_number_h

class Solution {
public:
    bool isUgly(int n) {
        if (n == 0) {
            return false;
        }

        vector<int> primeFactors = { 2, 3, 5};
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else if (n % 3 == 0) {
                n /= 3;
            } else if (n % 5 == 0) {
                n /= 5;
            } else {
                return false;
            }
        }

        return true;
    }
};

#endif
