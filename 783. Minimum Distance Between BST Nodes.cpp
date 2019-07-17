///783. Minimum Distance Between BST Nodes
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
    void allNodes(TreeNode* root)
    {
        if(root==NULL) return;
        v.push_back(root->val);
        allNodes(root->left);
        allNodes(root->right);
    }
    int minDiffInBST(TreeNode* root) 
    {
        allNodes(root);
        if(v.size()<2) return 0;
        int ans=INT_MAX;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
            ans=min(ans,v[i+1]-v[i]);
        return ans;
    }
};
