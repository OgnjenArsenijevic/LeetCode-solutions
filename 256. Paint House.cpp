///256. Paint House
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minCost(vector<vector<int>>& costs)
    {
        if(costs.empty()) return 0;
        vector<int> prev=costs[0];
        for(int i=1;i<costs.size();i++)
        {
            vector<int> curr=costs[i];
            curr[0]+=min(prev[1],prev[2]);
            curr[1]+=min(prev[0],prev[2]);
            curr[2]+=min(prev[0],prev[1]);
            prev=curr;
        }
        return min(prev[0],min(prev[1],prev[2]));
    }
};
