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
    bool out;
    int md(TreeNode* n, int d)
    {
        if(n == NULL)
            return d;

        int l = md(n->left, d);
        int r = md(n->right, d);
        if(abs(l - r) > 1)
            out = false;
        return max(l, r) + 1;
    }
public:
    bool isBalanced(TreeNode* root) {
        out = true;
        md(root, 0);
        return out;
    }
};
