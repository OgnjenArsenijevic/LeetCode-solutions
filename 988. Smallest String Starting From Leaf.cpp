///988. Smallest String Starting From Leaf
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
    vector<string> v;
    bool isLeaf(TreeNode* node)
    {
        if(node==nullptr) return false;
        if(node->left==nullptr && node->right==nullptr) return true;
        return false;
    }
    void solve(TreeNode* node, string s)
    {
        if(node==nullptr) return;
        s+=(char)(node->val+'a');
        if(isLeaf(node))
        {
            reverse(s.begin(),s.end());
            v.push_back(s);
            return;
        }
        solve(node->left,s);
        solve(node->right,s);
    }
    string smallestFromLeaf(TreeNode* root) 
    {
        solve(root,"");
        if(v.size()==0)
            return "";
        sort(v.begin(),v.end());
        return v[0];
    }
};
