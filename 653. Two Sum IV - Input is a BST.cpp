///653. Two Sum IV - Input is a BST
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
    unordered_set<int> s;
    void solve(TreeNode* root)
    {
        if(root==nullptr) return;
        s.insert(root->val);
        solve(root->left);
        solve(root->right);
    }
    bool findTarget(TreeNode* root, int k) 
    {
        solve(root);
        for(unordered_set<int>::iterator it=s.begin();it!=s.end();it++)
        {
            if((*it)!=0 && k%(*it)==0 && k/(*it)==2) continue;
            if(s.find(k-(*it))!=s.end()) return true;
        }
        return false;
    }
};
