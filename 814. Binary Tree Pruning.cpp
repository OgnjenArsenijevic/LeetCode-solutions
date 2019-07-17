///814. Binary Tree Pruning
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
    
    bool hasOne(TreeNode* root)
    {
        if(root==NULL) return false;
        bool l=hasOne(root->left);
        bool r=hasOne(root->right);
        if(!l) root->left=NULL;
        if(!r) root->right=NULL;
        return root->val==1 || l || r;
    }

    TreeNode* pruneTree(TreeNode* root) 
    {
        if(hasOne(root)) return root;
        return NULL;
    }
};
