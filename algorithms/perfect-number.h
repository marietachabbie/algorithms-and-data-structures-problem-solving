/* The problem in leetcode:
https://leetcode.com/problems/perfect-number */

#ifndef perfect_number_h
#define perfect_number_h

class Solution {
public:
    bool checkPerfectNumber(int num) {
        unordered_set<int> divisors;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                divisors.insert(i);
            }
        }

        int sum = 0;
        for (auto& itr : divisors) {
            sum += itr;
        }

        return sum == num;
    }
};

#endif
