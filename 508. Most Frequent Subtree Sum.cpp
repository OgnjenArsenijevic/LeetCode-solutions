///508. Most Frequent Subtree Sum
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
    vector<int> ans;
    int maxi=0;
    unordered_map<int,int> m;
    int sum(TreeNode* node)
    {
        if(node==nullptr) return 0;
        int br=node->val+sum(node->left)+sum(node->right);
        m[br]++;
        if(m[br]==maxi)
            ans.push_back(br);
        else
        {
            if(m[br]>maxi)
            {
                maxi=m[br];
                ans.clear();
                ans.push_back(br);
            }
        }
        return br;
    }
    vector<int> findFrequentTreeSum(TreeNode* root)
    {
        int br=sum(root);
        return ans;
    }
};
