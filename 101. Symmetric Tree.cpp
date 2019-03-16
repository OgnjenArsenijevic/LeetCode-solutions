///101. Symmetric Tree
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
    bool solve(TreeNode* node1,TreeNode* node2)
    {
        if(node1==nullptr && node2==nullptr) return true;
        if(node1==nullptr || node2==nullptr) return false;
        return (node1->val==node2->val && solve(node1->left,node2->right) && solve(node1->right,node2->left));
    }
    bool isSymmetric(TreeNode* root) 
    {
        return solve(root,root);
    }
};
