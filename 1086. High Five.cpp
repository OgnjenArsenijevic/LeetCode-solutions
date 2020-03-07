///1086. High Five
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) 
    {
        vector<vector<int>> ans;
        map<int,vector<int>> ump;
        for(int i=0;i<items.size();i++)
            ump[items[i][0]].push_back(items[i][1]);
        for(map<int,vector<int>>::iterator it=ump.begin();it!=ump.end();it++)
        {
            sort(it->second.begin(),it->second.end(),greater<int>());
            int cnt=0,sum=0;
            for(int i=0;i<it->second.size() && i<5;i++)
            {
                sum+=it->second[i];
                cnt++;
            }
            ans.push_back({it->first,sum/cnt});
        }
        return ans;
    }
};
