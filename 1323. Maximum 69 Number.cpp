///1323. Maximum 69 Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution {
public:
    int maximum69Number (int num) {
        string ans="";
        while(num)
        {
            ans+=(char)(num%10+'0');
            num/=10;
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(ans[i]=='6')
            {
                ans[i]='9';
                break;
            }
        }
        int res=0;
        for(int i=ans.size()-1;i>=0;i--)
        {
            res*=10;
            res+=(ans[i]-'0');
        }
        return res;
    }
};
