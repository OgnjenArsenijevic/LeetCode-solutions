///998. Maximum Binary Tree II
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
    vector<int> doMagic(TreeNode* root)
    {
        if(root==nullptr)
        {
            vector<int> vv;
            return vv;
        }
        vector<int> v1=doMagic(root->left);
        v1.push_back(root->val);
        vector<int> v2=doMagic(root->right);
        for(int i=0;i<v2.size();i++)
            v1.push_back(v2[i]);
        return v1;
    }
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) 
    {
        vector<int> vv=doMagic(root);
        vv.push_back(val);
        return constructMaximumBinaryTree(vv);
    }
};
