///538. Convert BST to Greater Tree
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
    unordered_map<int,int> um;
    void allNodes(TreeNode* root)
    {
        if(root==NULL) return;
        v.push_back(root->val);
        allNodes(root->left);
        allNodes(root->right);
    }
    void solve(TreeNode* root)
    {
        if(root==NULL) return;
        root->val+=um[root->val];
        solve(root->left);
        solve(root->right);
    }
    TreeNode* convertBST(TreeNode* root) 
    {
        if(root==NULL) return root;
        allNodes(root);
        sort(v.begin(),v.end());
        int curr=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            um[v[i]]=curr;
            curr+=v[i];
        }
        solve(root);
        return root;
    }
};
