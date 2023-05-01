/* The problem in leetcode:
https://leetcode.com/problems/merge-sorted-array */

#ifndef merge_sorted_arrays_h
#define merge_sorted_arrays_h

class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       m--; n--;
       for (int i = nums1.size() - 1; i >= 0; i--) {
           if (n < 0) {
               break;
           }

           if (m < 0) {
               nums1[i] = nums2[n];
               n--;
               continue;
           }

           if (nums2[n] > nums1[m]) {
               nums1[i] = nums2[n];
               n--;
           } else {
               nums1[i] = nums1[m];
               m--;
           }
       }
   }
};

#endif
