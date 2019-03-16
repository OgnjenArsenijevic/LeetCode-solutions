///14. Longest Common Prefix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    string longestCommonPrefix(vector<string>& v) 
    {
        if(v.size()==0) return "";
        if(v.size()==1)
            return v[0];
        string prefix="";
        for(int i=0;i<min(v[0].size(),v[1].size());i++)
        {
            if(v[0][i]==v[1][i])
                prefix+=v[0][i];
            else
                break;
        }
        for(int i=2;i<v.size();i++)
        {
            string s="";
            for(int j=0;j<min(prefix.size(),v[i].size());j++)
            {
                if(prefix[j]==v[i][j])
                    s+=prefix[j];
                else
                    break;
            }
            prefix=s;
        }
        return prefix;
    }
};
