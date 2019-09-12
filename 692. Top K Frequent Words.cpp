///692. Top K Frequent Words
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<string> topKFrequent(vector<string>& words, int k)
    {
        unordered_map<string, int> ump;
        for(int i=0;i<words.size();i++)
            ump[words[i]]++;
        vector<pair<int,string>> v;
        for(unordered_map<string, int>::iterator it=ump.begin();it!=ump.end();it++)
            v.push_back(make_pair(it->second,it->first));
        sort(v.begin(),v.end());
        int last=v.size()-1;
        vector<string> ans;
        int curr=last;
        while(k)
        {
            while(curr>0 && v[curr-1].first==v[curr].first)
                curr--;
            for(int i=curr;i<=last;i++)
            {
                ans.push_back(v[i].second);
                k--;
                if(k==0)
                    break;
            }
            last=curr-1;
            curr=last;
        }
        return ans;
    }
};
