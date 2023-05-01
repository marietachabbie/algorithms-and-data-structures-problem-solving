/* The problem in leetcode:
https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary */

#ifndef average_salary_h
#define average_salary_h

class Solution {
public:
    double average(vector<int>& salary) {
        int max = 0; int min = 0;
        unsigned int collective = 0;
        for (auto num : salary) {
            if (num > max) {
                max = num;
            }
            collective += num;
        }

        for (auto num : salary) {
            if (num < min || min == 0) {
                min = num;
            }
        }

        collective = collective - min - max;
        int size = salary.size() - 2;
        return collective / (double) size;
    }
};

#endif
