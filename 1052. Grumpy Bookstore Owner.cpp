///1052. Grumpy Bookstore Owner
///Author: Ognjen Arsenijevic
///username: ognjen 1998
class Solution 
{
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int x)
    {
        int ans=0;
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==0)
                ans+=customers[i];
        }
        int maxi=0;
        x--;
        for(int i=0;i+x<customers.size();i++)
        {
            int curr=0;
            for(int j=i;j<=i+x;j++)
            {
                if(grumpy[j])
                    curr+=customers[j];
            }
            maxi=max(maxi,curr);
        }
        return ans+maxi;
    }
};
