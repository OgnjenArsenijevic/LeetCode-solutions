///104. Maximum Depth of Binary Tree
///Author: Ognjen Arsenijevic
///username: ognjen1998
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    int maxi=0;
    void solve(TreeNode* root, int lvl)
    {
        if(root==nullptr) return;
        maxi=max(maxi,lvl);
        solve(root->left,lvl+1);
        solve(root->right,lvl+1);
    }
    int maxDepth(TreeNode* root) {
        solve(root,1);
        return maxi;
    }
};
