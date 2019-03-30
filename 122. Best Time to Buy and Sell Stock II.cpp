///122. Best Time to Buy and Sell Stock II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int ans=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
                ans+=prices[i]-prices[i-1];
        }
        return ans;
    }
};
