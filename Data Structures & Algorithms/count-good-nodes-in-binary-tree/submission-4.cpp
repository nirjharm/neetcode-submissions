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
    int gn;
    int mvsf;
    void dfs(TreeNode* r)
    {
        if(r == NULL)
            return;
        
        if(mvsf <= r->val)
        {
            gn++;
            mvsf = r->val;
        }
        int t = mvsf;
        dfs(r->left);
        mvsf = t;
        dfs(r->right);

    }
public:
    int goodNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        gn = 1;
        mvsf = root->val;
        dfs(root->left);

        mvsf = root->val;
        dfs(root->right);

        return gn;
    }
};
