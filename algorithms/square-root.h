/* The problem in leetcode:
https://leetcode.com/problems/sqrtx */

#ifndef square_root_h
#define square_root_h

class Solution {
public:
    int mySqrt(int x) {
        for (unsigned int i = 0; i <= (x / 2) + 1; i++) {
            if (i * i == x) {
                return i;
            } if (i * i > x) {
                return i - 1;
            }
        }

        return 0;
    }
};

#endif
