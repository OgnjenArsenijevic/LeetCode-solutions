///1042. Flower Planting With No Adjacent
///Author: Ognjen Arsenijevic
///username: ognjen 1998
class Solution 
{
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) 
    {
        vector<int> ans;
        vector<int> g[10005];
        for(int i=0;i<=n;i++)
            ans.push_back(-1);
        for(int i=0;i<paths.size();i++)
        {
            g[paths[i][0]].push_back(paths[i][1]);
            g[paths[i][1]].push_back(paths[i][0]);
        }
        for(int i=1;i<=n;i++)
        {
            if(ans[i]!=-1) continue;
            int use[5]={1,1,1,1,1};
            for(int j=0;j<g[i].size();j++)
            {
                if(ans[g[i][j]]!=-1)
                    use[ans[g[i][j]]]=0;
            }
            if(use[1]==1)
                ans[i]=1;
            else
            {
                if(use[2]==1)
                    ans[i]=2;
                else
                {
                    if(use[3]==1)
                        ans[i]=3;
                    else
                        ans[i]=4;
                }
            }
        }
        ans.erase(ans.begin());
        return ans;
    }
};
