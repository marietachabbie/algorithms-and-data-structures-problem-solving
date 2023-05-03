/* The problem in leetcode:
https://leetcode.com/problems/add-binary */

#ifndef add_binary_h
#define add_binary_h

class Solution {
public:
    string addStrChar(string curr, char& coef) {
        string sum = add2Chars(curr[1], coef);
        coef = (sum[0] == '1' || curr[0] == '1') ? '1' : '0';
        return sum;
    }

    string add2Chars(char a, char b) {
        if (a == '1' && b == '1') {
            return "10";
        } else {
            if (a == '1' || b == '1') {
                return "01";
            }

            return "00";
        }
    }

    string sumStrings (string longStr, string shortStr) {
        shortStr.insert(0, longStr.size() - shortStr.size(), '0');
        string result(longStr.size(), '0');
        char coef = '0';
        for (int i = longStr.size() - 1; i >= 0; i--) {
            string sum = add2Chars(longStr[i], shortStr[i]);
            sum = addStrChar(sum, coef);
            result[i] = sum[1];
        }

        if (coef != '0') {
            result.insert(0, 1, coef);
        }

        return result;
    }

    string addBinary(string a, string b) {
        if (a.size() > b.size()) {
            return sumStrings(a, b);
        }

        return sumStrings(b, a);
    }
};

#endif
