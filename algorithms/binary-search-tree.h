/* The problem in leetcode:
https://leetcode.com/problems/search-in-a-binary-search-tree */

#ifndef binary_search_tree_h
#define binary_search_tree_h

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == nullptr || root->val == val) {
            return root;
        }

        if (root->val < val) {
            return searchBST(root->right, val);
        } else {
            return searchBST(root->left, val);
        }
    };
};

#endif
