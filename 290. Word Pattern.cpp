///290. Word Pattern
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool wordPattern(string pattern, string str)
    {
        unordered_map<char,string> ump;
        vector<string> v;
        string curr="";
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==' ')
            {
                v.push_back(curr);
                curr="";
            }
            else
                curr+=str[i];
        }
        v.push_back(curr);
        if(pattern.size()!=v.size()) return false;
        for(int i=0;i<pattern.size();i++)
        {
            if(ump.find(pattern[i])==ump.end())
                ump[pattern[i]]=v[i];
            else if(ump[pattern[i]]!=v[i])
                return false;
        }
        unordered_map<string,char> ump1;
        for(int i=0;i<v.size();i++)
        {
            if(ump1.find(v[i])==ump1.end())
                ump1[v[i]]=pattern[i];
            else if(ump1[v[i]]!=pattern[i])
                return false;
        }
        return true;
    }
};
