///709. To Lower Case
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string toLowerCase(string str) 
    {
        for(int i=0;i<str.size();i++)
            str[i]=tolower(str[i]);
        return str;
    }
};
