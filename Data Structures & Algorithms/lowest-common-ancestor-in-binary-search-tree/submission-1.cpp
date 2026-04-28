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
    bool cb;
    int a;

    TreeNode* findlca(TreeNode* r, TreeNode* p, TreeNode* q)
    {
        if(r->val > q->val)
        {
            //in left
            return findlca(r->left, p, q);
        }
        else if (r->val < p->val)
        {
            // in right
            return findlca(r->right, p, q);
        }
        else
            return r;
    }


public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val > q->val)
        {
            TreeNode* t = p;
            p = q;
            q = t;
        }
        return findlca(root, p, q);
    }
};
