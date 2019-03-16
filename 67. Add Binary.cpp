///67. Add Binary
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    string addBinary(string a, string b) 
    {
        while(a.size()>b.size())
            b="0"+b;
        while(a.size()<b.size())
            a="0"+a;
        string s;
        int carry=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            int sum=carry;
            if(a[i]=='1')
                sum++;
            if(b[i]=='1')
                sum++;
            carry=0;
            if(sum==3)
            {
                carry=1;
                s+="1";
            }
            if(sum==2)
            {
                carry=1;
                s+="0";
            }
            if(sum==1)
                s+="1";
            if(sum==0)
                s+="0"; 
        }
        if(carry==1)
            s+="1";
        reverse(s.begin(),s.end());
        return s;
    }
};
