/* The problem in leetcode:
https://leetcode.com/problems/valid-palindrome */

#ifndef palindrome_h
#define palindrome_h

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string str) {
        string lowercased = "";
        for (int i = 0; i < str.length(); i++) {
            if (isalpha(str[i]) || isdigit(str[i])) {
                lowercased += tolower(str[i]);
            }
        }

        int l = 0; int r = lowercased.length() - 1;
        while (l < r) {
            if (lowercased[l] != lowercased[r]) {
                return false;
            }
            l++; r--;
        }

        return true;
    }
};

#endif
