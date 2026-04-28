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
    int md(TreeNode* n, int d)
    {
        if(n == NULL)
            return d;
        return max(md(n->left, d+1), md(n->right, d+1));
    }
public:
    int maxDepth(TreeNode* root) {
        return md(root, 0);
    }
};
