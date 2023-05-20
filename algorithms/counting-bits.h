/* The problem in leetcode:
https://leetcode.com/problems/counting-bits */

#ifndef counting_bits_h
#define counting_bits_h

class Solution {
private:
    int decToBitsCount(int num) {
        int count = 0;
        while (num > 0) {
            count += num % 2;
            num /= 2;
        }

        return count;
    }

public:
    vector<int> countBits(int num) {
        vector<int> result;
        for (int i = 0; i <= num; i++) {
            result.push_back(decToBitsCount(i));
        }

        return result;
    }
};

#endif
