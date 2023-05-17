/* The problem in leetcode:
https://leetcode.com/problems/happy-number */

#ifndef happy_number_h
#define happy_number_h

class Solution {
public:
    bool isHappy(int num) {
        if (num == 1) {
            return true;
        }

        unordered_set<int> memo;
        int sum = num;
        while (sum != 1) {
            if (memo.find(sum) != memo.end()) {
                return false;
            }

            memo.insert(sum);
            num = sum; sum = 0;
            while (num != 0) {
                sum += pow(num % 10, 2);
                num /= 10;
            }
        }

        return true;
    }
};

#endif
