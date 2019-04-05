///1017. Convert to Base -2
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string baseNeg2(int n) 
    {
        string ans="";
        if(n==0) return "0";
        while(n!=0)
        {
            int r=n%(-2);
            n/=(-2);
            if(r<0)
            {
                r+=2;
                n++;
            }
            if(r==1)
                ans+="1";
            else
                ans+="0";
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
