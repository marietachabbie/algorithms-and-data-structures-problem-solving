/* The problem in leetcode:
https://leetcode.com/problems/reverse-vowels-of-a-string */

#ifndef reverse_vowels_of_a_string_h
#define reverse_vowels_of_a_string_h

class Solution {
public:
    bool isVowel(char& ch) {
        set<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
        return vowels.find(tolower(ch)) != vowels.end();
    }

    string reverseVowels(string str) {
        int i = 0; int j = str.size() - 1;
        while (i < j) {
            if (isVowel(str[i]) && isVowel(str[j])) {
                swap(str[i], str[j]);
                i++, j--;
            } else if (isVowel(str[i])) {
                j--;
            } else if (isVowel(str[j])) {
                i++;
            } else {
                i++; j--;
            }
        }

        return str;
    }
};

#endif
