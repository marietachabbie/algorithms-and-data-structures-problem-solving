/* The problem in leetcode:
https://leetcode.com/problems/reverse-string-ii */

#ifndef reverse_string_ii_h
#define reverse_string_ii_h

class Solution {
private:
    void reverse(string& str, int i, int j) {
        while (i < j) {
            swap(str[i], str[j]);
            i++; j--;
        }
    }

public:
    string reverseStr(string str, int k) {
        int j = 0;
        for (int i = 0; i < str.size(); i = j + k + 1) {
            j = (i + k) - 1;
            if (j >= str.size()) {
                j = str.size() - 1;
            }
            reverse(str, i, j);
        }
        return str;
    }
};

#endif
