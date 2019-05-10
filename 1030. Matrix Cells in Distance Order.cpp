///1030. Matrix Cells in Distance Order
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0)
    {
        vector<pair<int,pair<int,int> > > v;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                int dis=abs(r0-i)+abs(c0-j);
                v.push_back(make_pair(dis,make_pair(i,j)));
            }
        }
        sort(v.begin(),v.end());
        vector<vector<int> > ans;
        for(int i=0;i<v.size();i++)
        {
            vector<int> tmp;
            tmp.push_back(v[i].second.first);
            tmp.push_back(v[i].second.second);
            ans.push_back(tmp);
        }
        return ans;
    }
};
