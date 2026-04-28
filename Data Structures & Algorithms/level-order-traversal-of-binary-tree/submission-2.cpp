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
    vector<vector<int>> res;
    void lvo(TreeNode*r, int l)
    {
        if(r == NULL)
            return;
        if(res.size() < l)
        {
            res.push_back(vector<int>{});
        }
        res[l-1].push_back(r->val);
        lvo(r->left, l+1);
        lvo(r->right, l+1);
    }

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        lvo(root, 1);
        return res;
    }
};
