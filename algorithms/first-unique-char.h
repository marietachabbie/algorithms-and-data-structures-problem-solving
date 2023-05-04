/* The problem in leetcode:
https://leetcode.com/problems/first-unique-character-in-a-string */

#ifndef first_unique_char_h
#define first_unique_char_h

class Solution {
public:
    int firstUniqChar(string str) {
        map<char, int> counters;
        for (int i = 0; i < str.size(); i++) {
            if (counters.find(str[i]) == counters.end()) {
                counters[str[i]] = 0;
            }

            counters[str[i]]++;
        }

        for (int i = 0; i < str.size(); i++) {
            if (counters[str[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};

#endif
