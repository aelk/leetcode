/*
 * LeetCode Problem #98
 * https://oj.leetcode.com/problems/validate-binary-search-tree/
 */

class Solution {
public:
    int min_node(TreeNode *root) {
        TreeNode *current = root;
        while (current->left) {
            current = current->left;
        }
        return current->val;
    }
    
    int max_node(TreeNode *root) {
        TreeNode *current = root;
        while (current->right) {
            current = current->right;
        }
        return current->val;
    }
    
    bool isValidBST(TreeNode *root) {
        if (!root) {
            return true;
        }
        
        if (root->right && (root->val >= min_node(root->right))) {
            return false;
        }
        
        if (root->left && (root->val <= max_node(root->left))) {
            return false;
        }
        
        if (!isValidBST(root->right) || !isValidBST(root->left)) {
            return false;
        }
        
        return true;
    }
};
