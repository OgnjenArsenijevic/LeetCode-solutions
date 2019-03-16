///8. String to Integer (atoi)
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int myAtoi(string str) 
    {
        long long ans=0;
        int sign=1;
        int cnt=0;
        int digit=0;
        int starting0=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='0')
                starting0++;
            if(str[i]>='1' && str[i]<='9')
                break;
        }
        for(int i=0;i<str.size();i++)
        {
            bool check=false;
            if(str[i]==' ')
            {
                if(digit>0 || cnt>0)
                {
                    if(ans*sign>INT_MAX) return INT_MAX;
                    if(ans*sign<INT_MIN) return INT_MIN;
                    return ans*sign; 
                }
                check=true;
            }    
            if(str[i]=='-')
            {
                if(digit>0)
                {
                    if(ans*sign>INT_MAX) return INT_MAX;
                    if(ans*sign<INT_MIN) return INT_MIN;
                    return ans*sign; 
                }
                sign=-1;
                check=true;
                cnt++;
            }   
            if(str[i]=='+')
            {
                if(digit>0)
                {
                    if(ans*sign>INT_MAX) return INT_MAX;
                    if(ans*sign<INT_MIN) return INT_MIN;
                    return ans*sign; 
                }
                sign=1;
                check=true;
                cnt++;
            }
            if(str[i]>='0' && str[i]<='9')
            {
                ans*=10;
                ans+=(str[i]-'0');
                check=true;
                digit++;
            }
            if(cnt>1) return 0;
            if(!check)
            {
                if(ans*sign>INT_MAX) return INT_MAX;
                if(ans*sign<INT_MIN) return INT_MIN;
                return ans*sign;   
            }
            if(digit-starting0>10)
            {
                if(sign==1) return INT_MAX;
                return INT_MIN;
            }
        }
        if(ans*sign>INT_MAX) return INT_MAX;
        if(ans*sign<INT_MIN) return INT_MIN;
        return ans*sign;
    }
};
