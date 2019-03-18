///504. Base 7
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string convertToBase7(int num) 
    {
        if(num==0) return "0";
        string s="";
        bool check=false;
        if(num<0)
        {
            num*=(-1);
            check=true;
        }
        while(num!=0)
        {
            s+=to_string(num%7);
            num/=7;
        }
        if(check)
            s+="-";
        reverse(s.begin(),s.end());
        return s;
    }
};
