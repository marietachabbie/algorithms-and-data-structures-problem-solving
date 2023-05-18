/* The problem in leetcode:
https://leetcode.com/problems/power-of-four */

#ifndef power_of_four_h
#define power_of_four_h

class Solution {
private:
    string reverse4BaseBits (int num) {
        string res = "";
        while (num != 0) {
            if (num % 4 != 0 && num % 4 != 1) {
                return "4";
            }
            res += (num % 4) + '0';
            num /= 4;
        }

        return res;
    }

public:
    bool isPowerOfFour(int num) {
        if (num == 1) {
            return true;
        }

        if (num == 0 || num % 4 != 0) {
            return false;
        }

        string reversed = reverse4BaseBits(num);
        return stoi(reversed) == 1;
    }
};

#endif
