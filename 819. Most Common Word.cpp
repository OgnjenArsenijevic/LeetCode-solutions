///819. Most Common Word
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string mostCommonWord(string paragraph, vector<string>& banned) 
    {
        unordered_map<string, int> ump;
        unordered_map<string,int> isBanned;
        for(int i=0;i<banned.size();i++)
        {
            for(int j=0;j<banned[i].size();j++)
                banned[i][j]=tolower(banned[i][j]);
            isBanned[banned[i]]=1;
        }    
        string s="";
        for(int i=0;i<paragraph.size();i++)
        {
            paragraph[i]=tolower(paragraph[i]);
            if(paragraph[i]>='a' && paragraph[i]<='z')
                s+=paragraph[i];
            else
            {
                if(s.size()>0)
                    ump[s]++;
                s="";
            }
        }
        vector<pair<int,string>> v;
        for(unordered_map<string, int>::iterator it=ump.begin();it!=ump.end();it++)
            v.push_back(make_pair(it->second,it->first));
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--)
        {
            if(isBanned[v[i].second]==0)
                return v[i].second;
        }
        return "";
    }
};
