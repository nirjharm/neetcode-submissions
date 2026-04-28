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
    void dfs(TreeNode* r, int mvsf)
    {
        if(r == NULL)
            return;
        
        if(mvsf <= r->val)
        {
            gn++;
            mvsf = r->val;
        } 
        dfs(r->left, mvsf); 
        dfs(r->right, mvsf);
    }
public:
    int goodNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        gn = 1;
        int mvsf = root->val;

        dfs(root->left, mvsf); 
        dfs(root->right, mvsf);

        return gn;
    }
};
