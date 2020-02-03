///1305. All Elements in Two Binary Search Trees
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
        ans.push_back(root->val);
        solve(root->left);
        solve(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
        solve(root1);
        solve(root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
