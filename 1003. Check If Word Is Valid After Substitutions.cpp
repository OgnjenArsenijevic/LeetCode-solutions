///1003. Check If Word Is Valid After Substitutions
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool isValid(string s) 
    {
        if(s.size()<3) return false;
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a')
                a++;
            if(s[i]=='b')
                b++;
            if(s[i]=='c')
                c++;
            if(a<b || b<c || a<c) return false;
        }
        if(a!=b || a!=c || b!=c) return false;
        return true;
    }
};
