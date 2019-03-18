///563. Binary Tree Tilt
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
        ans+=abs(sumTree(root->left)-sumTree(root->right));
        solve(root->left);
        solve(root->right);
    }
    int sumTree(TreeNode* root)
    {
        if(root==nullptr) return 0;
        return (root->val+sumTree(root->left)+sumTree(root->right));
    }
    int findTilt(TreeNode* root) 
    {
        solve(root);
        return ans;
    }
};
