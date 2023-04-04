/* The problem in leetcode:
https://leetcode.com/problems/valid-parentheses */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        vector<char> opens;
        vector<char> closes;

        for (int i = 0; i < str.length(); i++) {
            char current = str[i];
            if (current == '(' || current == '[' || current == '{') {
                opens.push_back(current);
            } else {
                if (opens.size() == 0) {
                    return false;
                }

                char lastOpen = opens.back();
                if ((current == ')' && lastOpen != '(') ||
                (current == ']' && lastOpen != '[') ||
                (current == '}' && lastOpen != '{')) {
                    return false;
                }

                opens.pop_back();
            }
        }

        return (opens.size() == 0) ? true : false;
    }
};
