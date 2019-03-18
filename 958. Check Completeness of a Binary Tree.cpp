///958. Check Completeness of a Binary Tree
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
    int treeSize(TreeNode* root) 
    { 
        if (root==nullptr) 
            return 0; 
        return (1+treeSize(root->left)+treeSize(root->right)); 
    }
    int num;
    bool solve(TreeNode* root,int idx) 
    { 
        if (root==nullptr) 
            return true; 
        if (idx>=num) 
            return false; 
        return (solve(root->left,2*idx+1) && solve(root->right,2*idx+2)); 
    }
    bool isCompleteTree(TreeNode* root) 
    {
        num=treeSize(root);
        return solve(root,0);
    }
};
