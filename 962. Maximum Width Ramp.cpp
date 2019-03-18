///962. Maximum Width Ramp
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int maxWidthRamp(vector<int>& v) 
    {
       vector<pair<int,int> > v1;
        for(int i=0;i<v.size();i++)
            v1.push_back(make_pair(v[i],i));
        sort(v1.begin(),v1.end());
        int maxi=0,curr=v1[v1.size()-1].second;
        for(int i=v1.size()-2;i>=0;i--)
        {
            if(v1[i].second < curr)
            {
                if(curr-v1[i].second>maxi)
                    maxi=curr-v1[i].second;
            }
            else
                curr=v1[i].second;
        }
        return maxi;
    }
};
