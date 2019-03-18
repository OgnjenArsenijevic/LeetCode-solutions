///701. Insert into a Binary Search Tree
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
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        if(root==nullptr)
        {
            TreeNode *newNode=new TreeNode(val);
            return newNode;
        }
        if(val<root->val)
            root->left=insertIntoBST(root->left,val);
        else
            root->right=insertIntoBST(root->right,val);
        return root;
    }
};
