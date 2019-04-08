///983. Minimum Cost For Tickets
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int day[366];
    bool travel[366];
    int dp(int i,vector<int>& costs)
    {
        int ans;
        if(i>365) return 0;
        if(day[i]!=-1) return day[i];
        if(travel[i])
            ans=min(min(dp(i+1,costs)+costs[0],dp(i+7,costs)+costs[1]),dp(i+30,costs)+costs[2]);
        else
            ans=dp(i+1,costs);
        day[i]=ans;
        return ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        for(int i=0;i<days.size();i++)
            travel[days[i]]=true;
        memset(day,-1,sizeof(day));
        return dp(1,costs);
    }
};
