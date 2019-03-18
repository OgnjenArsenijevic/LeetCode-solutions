///868. Binary Gap
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int binaryGap(int n) 
    {
        string s="";
        int cnt=0;
        while(n>0)
        {
            if(n & 1)
            {
                s+="1";
                cnt++;
            }    
            else
                s+="0";
            n>>=1;
        }
        if(cnt<2) return 0;
        cnt=0;
        int maxi=INT_MIN;
        bool found=false;
        for(int i=0;i<s.size();i++)
        {
            cnt++;
            if(s[i]=='1')
            {
                if(found==false)
                    cnt=0;
                else
                {
                    if(cnt>maxi)
                        maxi=cnt;
                    cnt=0;
                }
                found=true;
            }
        }
        return maxi;
    }
};
