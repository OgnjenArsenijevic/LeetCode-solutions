///1282. Group the People Given the Group Size They Belong To
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int>> groupThePeople(vector<int>& v) 
    {
        unordered_map<int, vector<int> > ump;
        vector<vector<int> > ans;
        int maxi=-1;
        for(int i=0;i<v.size();i++)
        {
            ump[v[i]].push_back(i);
            maxi=max(maxi,v[i]);
        }    
        for(int i=1;i<=maxi;i++)
        {
            for(int j=0;j<ump[i].size();j+=i)
            {
                vector<int> v;
                for(int k=j;k<j+i;k++)
                    v.push_back(ump[i][k]);
                ans.push_back(v);
            }
        }
        return ans;
    }
};
