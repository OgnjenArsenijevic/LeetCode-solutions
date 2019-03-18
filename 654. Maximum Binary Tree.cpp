///654. Maximum Binary Tree
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
    int max(vector<int>& v, int l, int r) 
    {
        int maxi = l;
        for (int i = l; i < r; i++) 
        {
            if (v[maxi] < v[i])
                maxi = i;
        }
        return maxi;
    }
    TreeNode* solve(vector<int>& v, int l, int r) 
    {
        if (l == r)
            return nullptr;
        int maxi = max(v, l, r);
        TreeNode* root = new TreeNode(v[maxi]);
        root->left = solve(v, l, maxi);
        root->right = solve(v, maxi + 1, r);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& v) 
    {
        return solve(v,0,v.size());
    }
};
