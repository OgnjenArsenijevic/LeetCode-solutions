///993. Cousins in Binary Tree
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
    int depth=-1;
    void solve1(TreeNode* root,int num,int lvl)
    {
        if(root==nullptr) return;
        if(root->val==num)
        {
            depth=lvl;
            return;
        }
        solve1(root->left,num,lvl+1);
        solve1(root->right,num,lvl+1);
    }
    bool check=false;
    void solve2(TreeNode* root,int x,int y)
    {
        if(root==nullptr) return;
        if(root->left!=nullptr && root->right!=nullptr)
        {
            if((root->left->val==x && root->right->val==y) || (root->left->val==y && root->right->val==x))
            {
                check=true;
                return;
            }
        }
        solve2(root->left,x,y);
        solve2(root->right,x,y);
    }
    
    bool isCousins(TreeNode* root, int x, int y) 
    {
        solve1(root,x,0);
        int val1=depth;
        depth=0;
        solve1(root,y,0);
        int val2=depth;
        solve2(root,x,y);
        if(val1==val2 && val1!=-1 && check==false)
            return true;
        return false;
    }
};
