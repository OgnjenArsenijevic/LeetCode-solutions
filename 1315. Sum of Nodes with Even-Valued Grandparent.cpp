///1315. Sum of Nodes with Even-Valued Grandparent
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
    void solve(TreeNode *root, TreeNode *parent, TreeNode* grandparent)
    {
        if(root==NULL) return;
        if(grandparent!=NULL && grandparent->val%2==0)
            sum+=root->val;
        solve(root->left,root,parent);
        solve(root->right,root,parent);
    }
    int sumEvenGrandparent(TreeNode* root) 
    {
        solve(root,NULL,NULL);
        return sum;
    }
};
