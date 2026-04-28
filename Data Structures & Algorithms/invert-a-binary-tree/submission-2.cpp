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
public:
    TreeNode* invertTree(TreeNode* r) {
        if(r == NULL)
            return r;
        if (r->left!=NULL && r->right != NULL)
        {
            void * t =  r->left;
            r->left = r->right;
            r->right = (TreeNode *)t;
            invertTree(r->left);
            invertTree(r->right);
        }
        else if(r->left!=NULL )
        {
            r->right = r->left;
            invertTree(r->right);
            r->left = NULL;
        }
        else if(r->right!=NULL )
        {
            r->left = r->right;
            invertTree(r->left);
            r->right = NULL;
        }
        return r;
        
    }
};
