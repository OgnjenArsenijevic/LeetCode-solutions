///700. Search in a Binary Search Tree
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
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        if(root==nullptr || root->val==val) return root;
        if(val>root->val)
            return searchBST(root->right,val);
        return searchBST(root->left,val);
        
    }
};
