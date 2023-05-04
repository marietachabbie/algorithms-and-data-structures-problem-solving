/* The problem in leetcode:
https://leetcode.com/problems/intersection-of-two-arrays */

#ifndef intersection_of_two_arrays_h
#define intersection_of_two_arrays_h

class Solution {
private:
    set<int> collectUniques(vector<int>& nums) {
        set<int> res;
        for(auto& num: nums) {
            res.insert(num);
        }

        return res;
    }

    vector<int> compareSets(set<int>& numSet1, set<int>& numSet2) {
        vector<int> res;
        for (auto itr : numSet1) {
            if (numSet2.find(itr) != numSet2.end()) {
                res.push_back(itr);
            }
        }

        return res;
    }

public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> numSet1 = collectUniques(nums1);
        set<int> numSet2 = collectUniques(nums2);

        if (numSet1.size() > numSet2.size()) {
            return compareSets(numSet1, numSet2);
        }

        return compareSets(numSet2, numSet1);
    }
};

#endif
