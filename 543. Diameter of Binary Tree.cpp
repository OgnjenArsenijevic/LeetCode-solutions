///543. Diameter of Binary Tree
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
    int maxi=1;
    int depth(TreeNode *root)
    {
        if(root==nullptr) return 0;
        return max(1,max(depth(root->left)+1,depth(root->right)+1));
    }
    void solve(TreeNode *root)
    {
        if(root==nullptr) return;
        maxi=max(maxi,depth(root->left)+depth(root->right)+1);
        solve(root->left);
        solve(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        solve(root);
        return maxi-1;
    }
};
