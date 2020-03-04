///103. Binary Tree Zigzag Level Order Traversal
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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<pair<TreeNode*,int> > q;
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            TreeNode* curr=q.front().first;
            int lvl=q.front().second;
            q.pop();
            vector<int> v;
            if(ans.size()<=lvl)
                ans.push_back(v);
            ans[lvl].push_back(curr->val);
            if(curr->left!=NULL)
                q.push(make_pair(curr->left,lvl+1));
            if(curr->right!=NULL)
                q.push(make_pair(curr->right,lvl+1));
        }
        for(int i=1;i<ans.size();i+=2)
            reverse(ans[i].begin(),ans[i].end());
        return ans;
    }
};
