///119. Pascal's Triangle II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int> > ans;
    vector<int> getRow(int rowIndex) 
    {
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        if(rowIndex==0) return ans[0];
        v.push_back(1);
        ans.push_back(v);
        if(rowIndex==1) return ans[1];
        for(int i=2;i<=rowIndex;i++)
        {
            vector<int> vv;
            vv.push_back(1);
            for(int j=0;j<v.size()-1;j++)
                vv.push_back(v[j]+v[j+1]);
            vv.push_back(1);
            ans.push_back(vv);
            v.clear();
            for(int j=0;j<vv.size();j++)
                v.push_back(vv[j]);
        }
        return ans[rowIndex];
    }
};
