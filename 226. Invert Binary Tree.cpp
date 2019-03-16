///226. Invert Binary Tree
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
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root==nullptr) return nullptr;
        TreeNode* right=invertTree(root->right);
        TreeNode* left=invertTree(root->left);
        root->right=left;
        root->left=right;
        return root;
    }
};
