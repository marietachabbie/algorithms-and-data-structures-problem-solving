/* The problem in leetcode:
https://leetcode.com/problems/merge-two-sorted-lists */

#ifndef merge_two_sorted_lists_h
#define merge_two_sorted_lists_h

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = list1;
        ListNode* resultHead = nullptr;
        if (list1 == nullptr) {
            return list2;
        }

        if (list2 == nullptr) {
            return list1;
        }

        while (result != nullptr) {
            if (list1 == nullptr) {
                result->next = list2; break;
            }

            if (list2 == nullptr) {
                result->next = list1; break;
            }

            if (list1->val <= list2->val) {
                if (resultHead == nullptr) {
                    result = list1;
                    resultHead = result;
                } else {
                    result->next = list1;
                    result = result->next;
                }
                list1 = list1->next;
            } else {
                if (resultHead == nullptr) {
                    result = list2;
                    resultHead = result;
                } else {
                    result->next = list2;
                    result = result->next;
                }
                list2 = list2->next;
            }
        }

        return resultHead;
    }
};

#endif
