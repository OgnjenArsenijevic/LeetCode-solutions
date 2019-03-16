///108. Convert Sorted Array to Binary Search Tree
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
    TreeNode* solve(vector<int>& v, int l,int r)
    {
        if(l>r) return nullptr;
        int mid=(l+r)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=solve(v,l,mid-1);
        root->right=solve(v,mid+1,r);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& v)
    {
        return solve(v,0,v.size()-1);
    }
};
