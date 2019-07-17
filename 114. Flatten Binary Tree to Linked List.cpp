///114. Flatten Binary Tree to Linked List
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
    TreeNode* solve(TreeNode* root)
    {
        if(root==NULL) return NULL;
        if(root->left==NULL && root->right==NULL) return root;
        TreeNode* l=solve(root->left);
        TreeNode* r=solve(root->right);
        if(l!=NULL)
        {
            l->right=root->right;
            root->right=root->left;
            root->left=NULL;
        }
        return r!=NULL ? r : l;
    }
    void flatten(TreeNode* root) 
    {
        solve(root);
    }
};
