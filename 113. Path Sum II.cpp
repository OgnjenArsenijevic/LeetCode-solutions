///113. Path Sum II
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
    vector<vector<int>> ans;
    bool isLeaf(TreeNode* node)
    {
        if(node==nullptr) return false;
        if(node->left==nullptr && node->right==nullptr) return true;
        return false;
    }
    void solve(TreeNode* node, vector<int> v, int curr, int sum)
    {
        if(node==nullptr) return;
        v.push_back(node->val);
        curr+=node->val;
        if(isLeaf(node))
        {
            if(curr==sum)
                ans.push_back(v);
            return;
        }
        solve(node->left,v,curr,sum);
        solve(node->right,v,curr,sum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum)
    {
        vector<int> v;
        solve(root,v,0,sum);
        return ans;
    }
};
