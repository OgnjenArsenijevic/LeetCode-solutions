///102. Binary Tree Level Order Traversal
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
    vector<int> arr[1005];
    void solve(TreeNode* root,int lvl)
    {
        if(root==NULL) return;
        arr[lvl].push_back(root->val);
        solve(root->left,lvl+1);
        solve(root->right,lvl+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> ans;
        solve(root,0);
        for(int i=0;i<1001;i++)
        {
            if(arr[i].size()==0)
                return ans;
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
