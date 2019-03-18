///821. Shortest Distance to a Character
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> shortestToChar(string S, char C)
    {
        vector<int> ans;
        for(int i=0;i<S.size();i++)
            ans.push_back(-1);
        queue<int> q;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]==C)
            {
                ans[i]=0;
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            if(u-1>=0 && ans[u-1]==-1)
            {
                ans[u-1]=ans[u]+1;
                q.push(u-1);
            }
            if(u+1<S.size() && ans[u+1]==-1)
            {
                ans[u+1]=ans[u]+1;
                q.push(u+1);
            }
        }
        return ans;
    }
};
