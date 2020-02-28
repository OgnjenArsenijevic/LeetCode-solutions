///1337. The K Weakest Rows in a Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        vector<pair<int,int> > v;
        for(int i=0;i<mat.size();i++)
        {
            int cnt=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                    cnt++;
                else
                    break;
            }
            v.push_back(make_pair(cnt,i));
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        for(int i=0;i<k;i++)
            ans.push_back(v[i].second);
        return ans;
    }
};
