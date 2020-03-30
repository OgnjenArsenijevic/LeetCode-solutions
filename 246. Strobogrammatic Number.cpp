///246. Strobogrammatic Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isStrobogrammatic(string num)
    {
        string save=num;
        for(int i=0;i<num.size();i++)
        {
            if(num[i]=='0')
                continue;
            else if(num[i]=='1')
                continue;
            else if(num[i]=='6')
                num[i]='9';
            else if(num[i]=='8')
                continue;
            else if(num[i]=='9')
                num[i]='6';
            else
                return false;
        }
        reverse(num.begin(),num.end());
        return save==num;
    }
};
