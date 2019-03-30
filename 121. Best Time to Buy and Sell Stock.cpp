///121. Best Time to Buy and Sell Stock
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size()==0) return 0;
        int maxRight[prices.size()];
        maxRight[prices.size()-1]=-1;
        for(int i=prices.size()-2;i>=0;i--)
            maxRight[i]=max(prices[i+1],maxRight[i+1]);
        int ans=0;
        for(int i=0;i<prices.size();i++)
            ans=max(ans,maxRight[i]-prices[i]);
        return ans;
    }
};
