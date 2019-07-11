///168. Excel Sheet Column Title
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    string convertToTitle(int n) 
    {
        string ans="";
        while(n>0)
        {
            char ch=(25+n%26)%26+'A';
            ans=ch+ans;
            n--;
            n/=26;
        }
        return ans;
    }
};
