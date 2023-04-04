/* The problem in leetcode:
https://leetcode.com/problems/roman-to-integer */

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string str) {
        int result = 0;
        map<char, int> romanToIntMap {
            { 'I', 1 },
            { 'V', 5 },
            { 'X', 10 },
            { 'L', 50 },
            { 'C', 100 },
            { 'D', 500 },
            { 'M', 1000 }
        };

        for (int i = str.length() - 1; i >= 0; i--) {
            char current = str[i];
            char prev = (i != 0) ? str[i - 1] : ' ';
            if (((current == 'V' || current == 'X') && prev == 'I') ||
                ((current == 'L' || current == 'C') && prev == 'X') ||
                ((current == 'D' || current == 'M') && prev == 'C')) {
                result += romanToIntMap[current] - romanToIntMap[prev];
                i--;
            } else {
                result += romanToIntMap[current];
            }
        }

        return result;
    }
};
