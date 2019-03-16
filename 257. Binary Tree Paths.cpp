///257. Binary Tree Paths
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
    vector<string> ans;
    bool isLeaf(TreeNode* node)
    {
        if(node==nullptr) return false;
        if(node->left==nullptr && node->right==nullptr) return true;
        return false;
    }
    void solve(TreeNode* node,string s)
    {
        if(node==nullptr) return;
        if(s.size()>0)
            s+="->";
        s+=to_string(node->val);
        if(isLeaf(node))
        {
            ans.push_back(s);
            return;
        }
        solve(node->left,s);
        solve(node->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        solve(root,"");
        return ans;
    }
};
