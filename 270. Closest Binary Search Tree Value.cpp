///270. Closest Binary Search Tree Value
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
    void solve(TreeNode* root, int& ans, double& dif, double target)
    {
        if(root==NULL) return;
        if(abs(root->val-target)<dif)
        {
            dif=abs(root->val-target);
            ans=root->val;
        }
        solve(root->left,ans,dif,target);
        solve(root->right,ans,dif,target);
    }
    int closestValue(TreeNode* root, double target) 
    {
        int ans;
        double dif=LLONG_MAX*1.0;  
        solve(root,ans,dif,target);
        return ans;
    }
};
