///515. Find Largest Value in Each Tree Row
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
    vector<int> ans;
    void solve(TreeNode* node, int lvl)
    {
        if(node==nullptr) return;
        lvl++;
        if(lvl>=ans.size())
            ans.push_back(node->val);
        else
        {
            if(node->val>ans[lvl])
                ans[lvl]=node->val;
        }
        solve(node->left,lvl);
        solve(node->right,lvl);
    }
    vector<int> largestValues(TreeNode* root) 
    {
        solve(root,-1);
        return ans;
    }
};
