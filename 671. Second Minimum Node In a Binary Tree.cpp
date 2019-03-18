///671. Second Minimum Node In a Binary Tree
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
    long long mini1=INT_MAX+10LL, mini2=INT_MAX+10LL;
    void solve(TreeNode* node)
    {
        if(node==nullptr) return;
        if(node->val<=mini1)
        {
            if(node->val<mini1)
                mini2=mini1;
            mini1=node->val;
        }    
        else
        {
            if(node->val<mini2)
                mini2=node->val;
        }
        solve(node->left);
        solve(node->right);
    }
    int findSecondMinimumValue(TreeNode* root) 
    {
        solve(root);
        return (mini2==INT_MAX+10LL ? -1 : mini2);
    }
};
