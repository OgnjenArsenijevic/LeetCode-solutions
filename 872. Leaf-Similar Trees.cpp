///872. Leaf-Similar Trees
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
    vector<int> v1;
    vector<int> v2;
    void solve1(TreeNode* root)
    {
        if(root==nullptr) return;
        if(root->left==nullptr && root->right==nullptr) v1.push_back(root->val);
        solve1(root->left);
        solve1(root->right);
    }
    void solve2(TreeNode* root)
    {
        if(root==nullptr) return;
        if(root->left==nullptr && root->right==nullptr) v2.push_back(root->val);
        solve2(root->left);
        solve2(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        solve1(root1);
        solve2(root2);
        if(v1.size()!=v2.size()) return false;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i]) return false;
        }
        return true;
    }
};
