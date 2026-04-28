/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    int res;
    int md(TreeNode* n, int d)
    {
        if(n == NULL)
            return d;

        int l = md(n->left, d);
        int r = md(n->right, d);
        if(l+r > res)
            res = l+r;
        return max(l, r) + 1;
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        res = 0;
        md(root, 0);
        return res;
    }
};
