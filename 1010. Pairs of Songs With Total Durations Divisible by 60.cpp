///1010. Pairs of Songs With Total Durations Divisible by 60
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int rem[61];
    int numPairsDivisibleBy60(vector<int>& v) 
    {
        for(int i=0;i<v.size();i++)
            rem[v[i]%60]++;
        int ans=0;
        for(int i=0;i<=30;i++)
        {
            if((i==0 || i==30) && rem[i]>0)
                ans+=(rem[i]*(rem[i]-1)/2);
            else
                ans+=(rem[i]*rem[60-i]);   
        }
        return ans;
    }
};
