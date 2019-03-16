///235. Lowest Common Ancestor of a Binary Search Tree
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        int parent=root->val;
        if(p->val>parent && q->val>parent)
            return lowestCommonAncestor(root->right,p,q);
        if(p->val<parent && q->val<parent)
            return lowestCommonAncestor(root->left,p,q);
        return root;
    }
};
