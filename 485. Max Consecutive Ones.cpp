///485. Max Consecutive Ones
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& v) 
    {
        int cnt=0,maxi=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
                cnt++;
            else
            {
                if(cnt>maxi)
                    maxi=cnt;
                cnt=0;
            }
        }
        return max(maxi,cnt);
    }
};
