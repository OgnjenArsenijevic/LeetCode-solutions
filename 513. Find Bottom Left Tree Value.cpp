///513. Find Bottom Left Tree Value
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
    int ans;
    int lvl=0;
    void solve(TreeNode* node,int curr)
    {
        if(node==nullptr) return;
        curr++;
        if(curr>lvl)
        {
            lvl=curr;
            ans=node->val;
        }
        solve(node->left,curr);
        solve(node->right,curr);
    }
    int findBottomLeftValue(TreeNode* root) 
    {
        solve(root,0);
        return ans;
    }
};
