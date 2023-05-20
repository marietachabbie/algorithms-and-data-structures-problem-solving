/* The problem in leetcode:
https://leetcode.com/problems/number-of-1-bits */

#ifndef number_of_1_bits_h
#define number_of_1_bits_h

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n > 0) {
            count += n % 2;
            n /= 2;
        }

        return count;
    }
};

#endif
