///112. Path Sum
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
    bool hasPathSum(TreeNode* root, int sum)
    {
        if(root)
        {
           if(sum-root->val==0 && root->left==nullptr && root->right==nullptr)
              return true;
           return (hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val));
        }
        return false;
    }
};
