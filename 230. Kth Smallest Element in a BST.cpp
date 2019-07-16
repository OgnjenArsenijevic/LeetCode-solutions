///230. Kth Smallest Element in a BST
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
    vector<int> v;
    void solve(TreeNode* root)
    {
        if(root==NULL)
            return;
        v.push_back(root->val);
        solve(root->left);
        solve(root->right);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        solve(root);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};
