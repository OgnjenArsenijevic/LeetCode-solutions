///506. Relative Ranks
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<string> findRelativeRanks(vector<int>& v) 
    {
        vector<string> ans;
        for(int i=0;i<v.size();i++)
            ans.push_back("");
        vector<pair<int,int>> vp;
        for(int i=0;i<v.size();i++)
            vp.push_back(make_pair(v[i],i));
        sort(vp.begin(),vp.end());
        int cnt=1;
        for(int i=vp.size()-1;i>=0;i--)
        {
            if(cnt==1)
                ans[vp[i].second]="Gold Medal";
            if(cnt==2)
                ans[vp[i].second]="Silver Medal";
            if(cnt==3)
                ans[vp[i].second]="Bronze Medal";
            if(cnt>3)
                ans[vp[i].second]=to_string(cnt);
            cnt++;
        }
        return ans;
    }
};
