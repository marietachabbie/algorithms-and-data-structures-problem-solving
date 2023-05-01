/* The problem in leetcode:
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string */

#ifndef first_occurrence_in_a_string_h
#define first_occurrence_in_a_string_h

class Solution {
public:
    int idxSubstring(string& haystack, string& needle, int i) {
        for (int j = 1; j < needle.length(); j++) {
            if (haystack[i] != needle[j]) {
                return i;
            }

            i++;
        }

        return 0;
    }

    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length()) {
            return -1;
        }

        for (int i = 0; i < haystack.length(); i++) {
            if (haystack[i] == needle[0]) {
                int idx = idxSubstring(haystack, needle, i + 1);
                if (idx == 0) {
                    return i;
                }
            }
        }

        return -1;
    }
};

#endif
