/* The problem in leetcode:
https://leetcode.com/problems/detect-capital */

#ifndef detect_capital_h
#define detect_capital_h

class Solution {
private:
    bool checkUppers(string& word) {
        bool allUpper = true; bool firstUpper = true;
        for (int i = 1; i < word.size(); i++) {
            if (word[i] == toupper(word[i])) {
                firstUpper = false;
            } else {
                allUpper = false;
            }
        }

        return allUpper || firstUpper;
    }

    bool checkLowers(string& word) {
        for (int i = 1; i < word.size(); i++) {
            if (word[i] == toupper(word[i])) {
                return false;
            }
        }

        return true;
    }

public:
    bool detectCapitalUse(string word) {
        if (word[0] == toupper(word[0])) {
            return checkUppers(word);
        }

        return checkLowers(word);
    }
};

#endif
