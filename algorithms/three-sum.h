/* The problem in leetcode:
https://leetcode.com/problems/3sum */

#ifndef three_sum_h
#define three_sum_h

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplets;
        set<vector<int>> temp;
        int target = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0;  i < nums.size(); i++){
            int j = i + 1; int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j]+ nums[k];
                if (sum == target) {
                    temp.insert({ nums[i], nums[j], nums[k] });
                    j++; k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        for (auto triplet : temp) {
            triplets.push_back(triplet);
        }

        return triplets;
    }
};

#endif
