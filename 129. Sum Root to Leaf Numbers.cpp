///129. Sum Root to Leaf Numbers
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
    int ans=0;
    bool isLeaf(TreeNode* node)
    {
        if(node==nullptr) return false;
        if(node->left==nullptr && node->right==nullptr) return true;
        return false;
    }
    void solve(TreeNode* node, int curr)
    {
        if(node==nullptr) return;
        curr*=10;
        curr+=node->val;
        if(isLeaf(node))
        {
            ans+=curr;
            return;
        }
        solve(node->left,curr);
        solve(node->right,curr);
    }
    int sumNumbers(TreeNode* root) 
    {
        solve(root,0);
        return ans;
    }
};
