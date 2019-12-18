///1267. Count Servers that Communicate
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int countServers(vector<vector<int>>& grid) 
    {
        if(grid.size()==0 || grid[0].size()==0)
            return 0;
        bool used[255];
        for(int i=0;i<255;i++)
                used[i]=false;
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            int cnt=0;
            for(int j=0;j<grid[0].size();j++)
                cnt+=grid[i][j];
            if(cnt>1)
            {
                ans+=cnt;
                used[i]=true;
            }    
        }
        for(int j=0;j<grid[0].size();j++)
        {
            int cnt=0;
            for(int i=0;i<grid.size();i++)
                cnt+=grid[i][j];
            if(cnt>1)
            {
                for(int i=0;i<grid.size();i++)
                {
                    if(grid[i][j]==1 && !used[i])
                        ans++;
                }
            }
        }
        return ans;
    }
};
