///118. Pascal's Triangle
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<vector<int> > ans;
    vector<vector<int>> generate(int numRows) 
    {
        if(numRows==0) return ans;
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        if(numRows==1) return ans;
        v.push_back(1);
        ans.push_back(v);
        if(numRows==2) return ans;
        for(int i=2;i<numRows;i++)
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
        return ans;
    }
};
