///1038. Binary Search Tree to Greater Sum Tree
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
    int val;
    void solve(TreeNode* root)
    {
        if(root==nullptr) return;
        solve(root->right);
        val+=root->val;
        root->val=val;
        solve(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) 
    {
        solve(root);
        return root;
    }
};
