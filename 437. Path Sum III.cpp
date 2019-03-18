///437. Path Sum III
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
    void solve(TreeNode* node,int curr, int sum)
    {
        if(node==nullptr) return;
        curr+=node->val;
        if(curr==sum) ans++;
        solve(node->left,curr,sum);
        solve(node->right,curr,sum);
    }
    void solve1(TreeNode* node,int sum)
    {
        if(node==nullptr) return;
        solve(node->left,0,sum);
        solve(node->right,0,sum);
        solve1(node->left,sum);
        solve1(node->right,sum);
    }
    int pathSum(TreeNode* root, int sum) 
    {
        solve(root,0,sum);
        solve1(root,sum);
        return ans;
    }
};
