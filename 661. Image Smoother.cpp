///661. Image Smoother
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& mat) 
    {
        int korI[8]={-1,-1,-1,0,1,1,1,0};
        int korJ[8]={-1,0,1,1,1,0,-1,-1};
        vector<vector<int>> ans;
        for(int i=0;i<mat.size();i++)
        {
            vector<int> v;
            for(int j=0;j<mat[i].size();j++)
                v.push_back(0);
            ans.push_back(v);
        }
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                int sum=mat[i][j];
                int cnt=1;
                for(int rr=0;rr<8;rr++)
                {
                    int ii=i+korI[rr];
                    int jj=j+korJ[rr];
                    if(ii>=0 && ii<mat.size() && jj>=0 && jj<mat[i].size())
                    {
                        sum+=mat[ii][jj];
                        cnt++;
                    }
                }
                ans[i][j]=sum/cnt;
            }
        }
        return ans;
    }
};
