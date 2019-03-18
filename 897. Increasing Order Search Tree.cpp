///897. Increasing Order Search Tree
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
    TreeNode* curr;
    void inorder(TreeNode* root)
    {
        if(root==nullptr) return;
        inorder(root->left);
        root->left=nullptr;
        curr->right=root;
        curr=curr->right;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) 
    {
        TreeNode* node=new TreeNode(0);
        curr=node;
        inorder(root);
        return node->right;
    }
};
