///1290. Convert Binary Number in a Linked List to Integer
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string freqAlphabets(string s) 
    {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(i+2<s.size() && s[i+2]=='#')
            {
                ans+=('a'-1+(s[i]-'0')*10)+s[i+1]-'0';
                i+=2;
            }
            else
                ans+='a'+s[i]-'0'-1;
        }
        return ans;
    }
};
