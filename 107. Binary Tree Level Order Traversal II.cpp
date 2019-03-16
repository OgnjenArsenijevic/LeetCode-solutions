///107. Binary Tree Level Order Traversal II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root)
    {
        vector<vector<int>> ans(10000);
        if(root==nullptr)
        {
            ans.resize(0);
            return ans;
        }
        int cnt=0;
        queue<pair<TreeNode*,int> > q;
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            pair<TreeNode*,int> p=q.front();
            q.pop();
            ans[p.second].push_back(p.first->val);
            if(p.first->left!=nullptr)
            {
                q.push(make_pair(p.first->left,p.second+1));
                cnt=p.second+1;
            }    
            if(p.first->right!=nullptr)
            {
                q.push(make_pair(p.first->right,p.second+1));
                cnt=p.second+1;
            }    
        }
        ans.resize(cnt+1);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
