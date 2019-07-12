///542. 01 Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int korI[4]={-1,0,1,0};
    int korJ[4]={0,1,0,-1};
    vector<vector<int>> ans;
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        for(int i=0;i<mat.size();i++)
        {
            vector<int> v;
            for(int j=0;j<mat[0].size();j++)
                v.push_back(INT_MAX);
            ans.push_back(v);
        }
        queue<pair<int,int> > q;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push(make_pair(i,j));
                }
            }
        }
        while(!q.empty())
        {
            pair<int,int> p=q.front();
            q.pop();
            for(int rr=0;rr<4;rr++)
            {
                int ii=p.first+korI[rr];
                int jj=p.second+korJ[rr];
                if(ii>=0 && ii<mat.size() && jj>=0 && jj<mat[0].size())
                {
                    if(ans[p.first][p.second]+1<ans[ii][jj])
                    {
                        ans[ii][jj]=ans[p.first][p.second]+1;
                        q.push(make_pair(ii,jj));
                    }
                }
            }
        }
        return ans;
    }
};
