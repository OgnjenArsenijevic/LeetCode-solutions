///111. Minimum Depth of Binary Tree
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
    int mini=INT_MAX-10;
    void solve(TreeNode* root, int lvl)
    {
        if(root==nullptr) return;
        if(root->left==nullptr && root->right==nullptr)
        {
            mini=min(mini,lvl);
            return;
        }
        solve(root->left,lvl+1);
        solve(root->right,lvl+1);
    }
    int minDepth(TreeNode* root) 
    {
        solve(root,1);
        return (mini==INT_MAX-10 ? 0 : mini);
    }
};
