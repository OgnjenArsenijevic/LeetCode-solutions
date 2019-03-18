///637. Average of Levels in Binary Tree
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
    map<int,long long> m1;
    map<int,int> m2;
    void solve(TreeNode* node,int lvl)
    {
        if(node==nullptr) return;
        m1[lvl]+=(long long)node->val;
        m2[lvl]++;
        lvl++;
        solve(node->left,lvl);
        solve(node->right,lvl);
    }
    vector<double> averageOfLevels(TreeNode* root)
    {
        vector<double> ans;
        solve(root,0);
        for(map<int,long long>::iterator it=m1.begin();it!=m1.end();it++)
            ans.push_back((double)it->second/m2[it->first]);
        return ans;
    }
};
