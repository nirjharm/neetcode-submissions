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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL)
        {
            if(p == NULL && q == NULL)
                return true;
            else
                return false;
        }
        if(p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        return false;
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool x = isSameTree(root, subRoot);
        if(root == NULL) 
            return x;
        return x || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
