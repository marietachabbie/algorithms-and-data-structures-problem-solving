/* The problem in leetcode:
https://leetcode.com/problems/majority-element */

#ifndef majority_element_h
#define majority_element_h

class Solution {
private:
    map<int, int> countElements(vector<int>& nums) {
        map<int, int> counters;
        for (auto& num : nums) {
            if (counters.find(num) == counters.end()) {
                counters[num] = 0;
            }

            counters[num]++;
        }

        return counters;
    }

    int findMajority(map<int, int>& counters, int n) {
        for (auto& pair : counters) {
            if (pair.second > n) {
                return pair.first;
            }
        }

        return -1;
    }

public:
    int majorityElement(vector<int>& nums) {
        map<int, int> counters = countElements(nums);
        return findMajority(counters, nums.size() / 2);
    }
};

#endif
