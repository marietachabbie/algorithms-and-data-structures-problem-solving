/* The problem in leetcode:
https://leetcode.com/problems/longest-common-prefix */

#ifndef longest_common_prefix_h
#define longest_common_prefix_h

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        string word;
        int minLen;

        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].length() == 0) {
                return "";
            }

            minLen = min(prefix.length(), strs[i].length());
            word = strs[i].substr(0, minLen);
            prefix.erase(minLen);

            for (int j = 0; j < minLen; j++) {
                if (word[j] != prefix[j]) {
                    prefix = prefix.substr(0, j);
                    break;
                }
            }
        }

        return prefix;
    }
};

#endif
