///110. Balanced Binary Tree
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
    bool ans=true;
    int depth(TreeNode* node, int lvl)
    {
        if(node==nullptr) return lvl;
        lvl++;
        return max(depth(node->left,lvl),depth(node->right,lvl));
    }
    void solve(TreeNode* node)
    {
        if(node==nullptr) return;
        int br=depth(node->left,0)-depth(node->right,0);
        if(br>1 || br<-1)
        {
            ans=false;
            return;
        }
        solve(node->left);
        solve(node->right);
    }
    bool isBalanced(TreeNode* root) 
    {
        solve(root);
        return ans;
    }
};
