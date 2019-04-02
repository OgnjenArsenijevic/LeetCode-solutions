///134. Gas Station
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int dif,ans,mini;
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        for(int i=0;i<gas.size();i++)
        {
            dif+=gas[i]-cost[i];
            if(dif<mini)
            {
                mini=dif;
                ans=i+1;
            }
        }
        return (dif<0 ? -1 : ans);
    }
};
