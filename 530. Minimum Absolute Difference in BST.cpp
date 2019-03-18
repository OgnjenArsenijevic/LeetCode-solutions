///530. Minimum Absolute Difference in BST
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
    int ans=INT_MAX;
    void solve(TreeNode* node)
    {
        if(node==nullptr) return;
        solve(node->left);
        v.push_back(node->val);
        solve(node->right);
    }
    int getMinimumDifference(TreeNode* root) 
    {
        solve(root);
        for(int i=1;i<v.size();i++)
        {
            if(v[i]-v[i-1]<ans)
                ans=v[i]-v[i-1];
        }
        return (ans==INT_MAX ? 0 : ans);
    }
};
