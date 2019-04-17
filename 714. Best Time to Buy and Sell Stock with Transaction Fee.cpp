///714. Best Time to Buy and Sell Stock with Transaction Fee
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxProfit(vector<int>& prices, int fee) 
    {
        if(prices.size()<2) return 0;
        int mini=prices[0],ans=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<mini)
                mini=prices[i];
            else
            {
                if(prices[i]>mini+fee)
                {
                    ans+=prices[i]-fee-mini;
                    mini=prices[i]-fee;
                }
            }
        }
        return ans;
    }
};
