/* The problem in leetcode:
https://leetcode.com/problems/length-of-last-word */

#ifndef length_of_last_word_h
#define length_of_last_word_h

class Solution {
public:
    int lengthOfLastWord(string s) {
        string lastword = "";
        int idx = s.length() - 1;
        while (s[idx] == ' ') {
            idx--;
        }

        for (int i = idx; i >= 0 && s[i] != ' '; i--) {
            lastword += s[i];
        }

        return lastword.length();
    }
};

#endif
