///687. Longest Univalue Path
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
    int maxi=0;
    int solve(TreeNode* node)
    {
        if(node==nullptr) return 0;
        int l=solve(node->left);
        int r=solve(node->right);
        int ll=0,rr=0;
        if(node->left!=nullptr && node->left->val==node->val)
            ll=l+1;
        if(node->right!=nullptr && node->right->val==node->val)
            rr=r+1;
        maxi=max(maxi,ll+rr);
        return max(ll,rr);
        
    }
    int longestUnivaluePath(TreeNode* root)
    {
        solve(root);
        return maxi;
    }
};
