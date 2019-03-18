///572. Subtree of Another Tree
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
    void solve(TreeNode* node, string &s)
    {
        if(node==nullptr)
        {
            s+="-";
            return ;
        }
        solve(node->left,s);
        solve(node->right,s);
        s+="!"+to_string(node->val)+"!";
    }
    bool isSubtree(TreeNode* s, TreeNode* t) 
    {
        string ss="";
        string tt="";
        solve(s,ss);
        solve(t,tt);
        return (ss.find(tt) != string::npos);
    }
};
