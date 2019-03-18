///501. Find Mode in Binary Search Tree
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
    int maxi=0;
    vector<int> ans;
    unordered_map<int,int> m;
    void solve(TreeNode* node)
    {
        if(node==nullptr) return;
        m[node->val]++;
        if(m[node->val]==maxi)
            ans.push_back(node->val);
        if(m[node->val]>maxi)
        {
            maxi=m[node->val];
            ans.clear();
            ans.push_back(node->val);
        }
        solve(node->left);
        solve(node->right);
    }
    vector<int> findMode(TreeNode* root) 
    {
        solve(root);
        return ans;
    }
};
