/*
* LeetCode Problem #111
* https://oj.leetcode.com/problems/minimum-depth-of-binary-tree/
*/

class Solution {
public:
    int minDepth(TreeNode *root) {
        if (!root) return 0;
        
        int l_depth = minDepth(root->left);
        int r_depth = minDepth(root->right);
        
        if (l_depth == 0) {
            return r_depth + 1;
        } else if (r_depth == 0) {
            return l_depth + 1;
        } else {
            return min(l_depth, r_depth) + 1;   
        }
    }
};
