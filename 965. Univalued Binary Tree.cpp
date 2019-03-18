///965. Univalued Binary Tree
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
    int val;
    bool check=true;
     void solve(TreeNode* root) 
     {
        if(root==nullptr)
            return;
        if(root->val != val)
        {
            check=false;
            return;
        }
         solve(root->left);
         solve(root->right);
    }
    bool isUnivalTree(TreeNode* root) 
    {
        val=root->val;
        solve(root);
        return check;
    }
};
