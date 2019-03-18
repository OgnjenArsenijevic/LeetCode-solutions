///1008. Construct Binary Search Tree from Preorder Traversal
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
    int idx=0;
    TreeNode* solve(vector<int>& preorder,int l, int h)
    {
        if(l>h || idx>=preorder.size()) return nullptr;
        TreeNode* root=new TreeNode(preorder[idx]);
        idx+=1;
        if(l==h) return root;
        int i;
        for(i=l;i<h+1;i++)
        {
            if(preorder[i]>root->val) break;
        }
        int save=i;
        root->left=solve(preorder,idx,save-1);
        root->right=solve(preorder,save,h);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        return solve(preorder,0,preorder.size()-1);
    }
};
