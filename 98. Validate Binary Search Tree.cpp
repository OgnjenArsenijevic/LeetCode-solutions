///98. Validate Binary Search Tree
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
    bool solve(TreeNode* root, long long mini, long long maxi)
    {
        if(root==nullptr) return true;
        return (root->val > mini) && (root->val < maxi) && solve(root->left,mini,root->val) && solve(root->right,root->val,maxi);
    }
    bool isValidBST(TreeNode* root) 
    {
        return solve(root,INT_MIN-5LL,INT_MAX+5LL);
    }
};
