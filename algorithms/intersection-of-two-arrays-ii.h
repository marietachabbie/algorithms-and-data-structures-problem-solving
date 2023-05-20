/* The problem in leetcode:
https://leetcode.com/problems/intersection-of-two-arrays-ii */

#ifndef intersection_of_two_arrays_ii_h
#define intersection_of_two_arrays_ii_h

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

    vector<int> compare (map<int, int>& map1, map<int, int>& map2) {
        vector<int> result;
        for (auto& num : map1) {
            if (map2.find(num.first) != map2.end()) {
                int smaller = min(map1[num.first], map2[num.first]);
                for (int i = 0; i < smaller; i++) {
                    result.push_back(num.first);
                }
            }
        }

        return result;
    }

public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> nums1Counts = countElements(nums1);
        map<int, int> nums2Counts = countElements(nums2);
        if (nums1Counts.size() > nums2Counts.size()) {
            return compare(nums2Counts, nums1Counts);
        }
        return compare(nums1Counts, nums2Counts);
    }
};

#endif
