/* The problem in leetcode:
https://leetcode.com/problems/power-of-two */

#ifndef power_of_two_h
#define power_of_two_h

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && !(n & (n-1));
    }
};

#endif
