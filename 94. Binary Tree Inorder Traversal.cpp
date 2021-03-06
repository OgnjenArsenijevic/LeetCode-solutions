///94. Binary Tree Inorder Traversal
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
    vector<int> inorderTraversal(TreeNode* root)
    {
        if(root==nullptr) return ans;
        inorderTraversal(root->left);
        if(root!=nullptr)
            ans.push_back(root->val);
        inorderTraversal(root->right);
        return ans;
    }
};
