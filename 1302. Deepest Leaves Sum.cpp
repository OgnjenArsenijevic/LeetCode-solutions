///1302. Deepest Leaves Sum
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
    int lvl=0;
    void maxLvl(TreeNode* root, int currLvl)
    {
        if(root==NULL) return;
        if(root!=NULL && root->left==NULL && root->right==NULL)
            lvl=max(lvl,currLvl);
        maxLvl(root->left,currLvl+1);
        maxLvl(root->right,currLvl+1);
    }
    int ans=0;
    void solve(TreeNode* root, int currLvl)
    {
        if(root==NULL) return;
        if(root!=NULL && root->left==NULL && root->right==NULL && currLvl==lvl)
            ans+=root->val;
        solve(root->left,currLvl+1);
        solve(root->right,currLvl+1);
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        maxLvl(root,0);
        solve(root,0);
        return ans;
    }
};
