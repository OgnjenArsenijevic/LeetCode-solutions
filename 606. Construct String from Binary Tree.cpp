///606. Construct String from Binary Tree
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
    string tree2str(TreeNode* t) 
    {
        if(t==nullptr) return "";
        string s=to_string(t->val);
        if(t->left!=nullptr)
            s+="("+tree2str(t->left)+")";
        if(t->right!=nullptr && t->left==nullptr)
            s+="()";
        if(t->right!=nullptr)
            s+="("+tree2str(t->right)+")";
        return s;
    }
};
