///1022. Sum of Root To Leaf Binary Numbers
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
    int ans=0;
    bool isLeaf(TreeNode* root)
    {
        if(root==nullptr) return false;
        if(root->left==nullptr && root->right==nullptr) return true;
        return false;
    }
    void solve(TreeNode* root, string s)
    {
        if(root==nullptr) return;
        s+=(root->val==1 ? "1" : "0");
        if(isLeaf(root))
        {
            int val=0,mul=1;
            for(int i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='1')
                    val+=mul;
                mul*=2;
            }
            ans+=val;
        }
        solve(root->left,s);
        solve(root->right,s);
    }
    int sumRootToLeaf(TreeNode* root) 
    {
        solve(root,"");
        return ans;
    }
};
