///617. Merge Two Binary Trees
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
    
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) 
    {
        TreeNode* root=(TreeNode*)malloc(sizeof(TreeNode));
        if(t1==nullptr && t2==nullptr) return nullptr;
        if(t1==nullptr && t2!=nullptr) root->val=t2->val;
        if(t1!=nullptr && t2==nullptr) root->val=t1->val;
        if(t1!=nullptr && t2!=nullptr) root->val=t1->val+t2->val;
        if(t1==nullptr && t2!=nullptr)
        {
            root->left=mergeTrees(nullptr,t2->left);
            root->right=mergeTrees(nullptr,t2->right);
        }
        if(t1!=nullptr && t2==nullptr)
        {
            root->left=mergeTrees(t1->left,nullptr);
            root->right=mergeTrees(t1->right,nullptr);
        }
        if(t1!=nullptr && t2!=nullptr)
        {
            root->left=mergeTrees(t1->left,t2->left);
            root->right=mergeTrees(t1->right,t2->right);
        }
        return root;
    }
};
