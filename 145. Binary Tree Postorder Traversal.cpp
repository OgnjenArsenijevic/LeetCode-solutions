///145. Binary Tree Postorder Traversal
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
    vector<int> ans;
    void solve(TreeNode* root)
    {
        if(root==NULL) return;
        solve(root->left);
        solve(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        solve(root);
        return ans;
    }
};
