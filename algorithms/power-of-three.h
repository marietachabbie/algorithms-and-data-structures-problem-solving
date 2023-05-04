/* The problem in leetcode:
https://leetcode.com/problems/power-of-three */

#ifndef power_of_three_h
#define power_of_three_h

class Solution {
public:
    bool isPowerOfThree(int n) {
        int maxpow = pow(3, 19);
        return n > 0 && maxpow % n == 0;
    }
};

#endif
