///1026. Maximum Difference Between Node and Ancestor
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
    int ans=0;
    void solve(TreeNode* root)
    {
        if(root==nullptr) return;
        findBest(root->left,root->val);
        findBest(root->right,root->val);
        solve(root->left);
        solve(root->right);
    }
    void findBest(TreeNode* curr, int val)
    {
        if(curr==nullptr) return;
        ans=max(ans,abs(val-curr->val));
        findBest(curr->left,val);
        findBest(curr->right,val);
    }
    int maxAncestorDiff(TreeNode* root) 
    {
        solve(root);
        return ans;
    }
};
