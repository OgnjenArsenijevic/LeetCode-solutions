///987. Vertical Order Traversal of a Binary Tree
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
    vector<pair<int,int> > v[2400];
    
    void solve(TreeNode* node, int x, int y)
    {
        if(node==nullptr) return;
        v[x].push_back(make_pair(y,node->val));
        solve(node->left,x-1,y-1);
        solve(node->right,x+1,y-1);
    }
        
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        vector<vector<int>> ans;
        solve(root,1200,1200);
        for(int i=0;i<2400;i++)
        {
            if(v[i].size()>0)
            {
                sort(v[i].begin(),v[i].end());
                bool change=true;
                while(change)
                {
                    change=false;
                    for(int j=0;j<v[i].size()-1;j++)
                    {
                        //cout<<v[i][j].first<<" "<<v[i][j+1].first<<" "<<v[i][j].second<<" "<<v[i][j+1].second<<"\n";
                        if(v[i][j].first==v[i][j+1].first && v[i][j].second<v[i][j+1].second)
                        {
                            swap(v[i][j],v[i][j+1]);
                            change=true;
                        }
                    }
                }
                vector<int> vv;
                for(int j=v[i].size()-1;j>=0;j--)
                    vv.push_back(v[i][j].second);
                ans.push_back(vv);
            }
        }
        return ans;
    }
};
