/* The problem in leetcode:
https://leetcode.com/problems/third-maximum-number */

#ifndef third_maximum_number_h
#define third_maximum_number_h

class Solution {
private:
    const int MIN = -2147483647;
    void collectDistincts(vector<int>& nums, set<int>& distincts) {
        for (auto& num : nums) {
            distincts.insert(num);
        }
    }

    void shiftAndInsert(vector<int>& maxes, int num, int idx, int& size) {
        for (int i = 0; i < idx; i++) {
            maxes[i] = maxes[i + 1];
        }

        maxes[idx] = num;
        size++;
    }

    void compare(int num, vector<int>& maxes, int& size) {
        if (num > maxes[2] || maxes[2] == MIN) {
            shiftAndInsert(maxes, num, 2, size);
        } else if (num > maxes[1] || maxes[1] == MIN) {
            shiftAndInsert(maxes, num, 1, size);
        } else if (num > maxes[0] || maxes[0] == MIN) {
            shiftAndInsert(maxes, num, 0, size);
        }
    }

public:
    int thirdMax(vector<int>& nums) {
        set<int> distincts;
        collectDistincts(nums, distincts);

        int size = 0;
        vector<int> maxes(3, MIN);
        for (auto& num : distincts) {
            compare(num, maxes, size);
        }

        if (size < 3) {
            return maxes[2];
        }

        return maxes[0];
    }
};

#endif
