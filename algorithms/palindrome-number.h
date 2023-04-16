/* The problem in leetcode:
https://leetcode.com/problems/palindrome-number */

#ifndef palindrome_number_h
#define palindrome_number_h

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) { return false; }
        if (x < 10) { return true; }

        string stringified = to_string(x);
        int l = 0; int r = stringified.length() - 1;
        while (l < r) {
            if (stringified[l] != stringified[r]) {
                return false;
            }

            l++;
            r--;
        }

        return true;
    }
};

#endif
