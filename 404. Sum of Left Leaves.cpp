///404. Sum of Left Leaves
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
    int sum=0;
    bool isLeaf(TreeNode* node)
    {
        if(node==nullptr) return false;
        if(node->left==nullptr && node->right==nullptr) return true;
        return false;
    }
    void solve(TreeNode* node)
    {
        if(node==nullptr) return;
        if(node->left!=nullptr)
        {
            if(isLeaf(node->left)) sum+=node->left->val;
            else solve(node->left);
        }
        solve(node->right);
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        solve(root);
        return sum;
    }
};
