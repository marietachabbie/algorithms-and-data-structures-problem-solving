/* The problem in leetcode:
https://leetcode.com/problems/add-digits */

#ifndef add_digits_h
#define add_digits_h

class Solution {
public:
    int addDigits(int num) {
        int res = num;
        while (num / 10 != 0) {
            res = 0;
            while(num != 0) {
                res += num % 10;
                num /= 10;
            }

            num = res;
        }

        return res;
    }
};

#endif
