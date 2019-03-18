///968. Binary Tree Cameras
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
    vector<int> solve(TreeNode* root)
    {
        vector<int> v;
        if(root==nullptr)
        {
            v.push_back(0);
            v.push_back(0);
            v.push_back(2000);
            return v;
        }
        vector<int> left=solve(root->left);
        vector<int> right=solve(root->right);
        int miniL=min(left[1],left[2]);
        int miniR=min(right[1],right[2]);
        int dp0=miniL+miniR;
        int dp1=min(left[2]+miniR,right[2]+miniL);
        int dp2=1+min(left[0],miniL)+min(right[0],miniR);
        v.push_back(dp0);
        v.push_back(dp1);
        v.push_back(dp2);
        return v;
    }
    int minCameraCover(TreeNode* root) 
    {
        vector<int> v=solve(root);
        return min(v[1],v[2]);
    }
};
