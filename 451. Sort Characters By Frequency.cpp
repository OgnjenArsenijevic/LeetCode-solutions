///451. Sort Characters By Frequency
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string frequencySort(string s) 
    {
        unordered_map<char,int> um;
        for(int i=0;i<s.size();i++)
            um[s[i]]++;
        vector<pair<int,char> > v;
        for(unordered_map<char,int>::iterator it=um.begin();it!=um.end();it++)
            v.push_back(make_pair(it->second,it->first));
        sort(v.begin(),v.end());
        string ans="";
        for(int i=v.size()-1;i>=0;i--)
        {
            int cnt=v[i].first;
            while(cnt>0)
            {
                cnt--;
                ans+=v[i].second;   
            }
        }
        return ans;
    }
};
