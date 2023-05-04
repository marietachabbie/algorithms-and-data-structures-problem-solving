/* The problem in leetcode:
https://leetcode.com/problems/reverse-string */

#ifndef reverse_string_h
#define reverse_string_h

class Solution {
public:
    void reverseString(vector<char>& str) {
        int i = 0; int j = str.size() - 1;
        while (i < j) {
            swap(str[i], str[j]);
            i++; j--;
        }
    }
};

#endif
