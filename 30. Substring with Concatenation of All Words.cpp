
///30. Substring with Concatenation of All Words
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> findSubstring(string s, vector<string>& v) 
    {
        vector<int> ans;
        unordered_map<string, int> ump;
        int allWordsLen;
        if(v.size()>0)
            allWordsLen=v.size()*v[0].size();
        else
            return ans;
        if(s.size()==0 || allWordsLen>s.size()) return ans;
        for(int i=0;i<v.size();i++)
            ump[v[i]]++;
        for(int i=0;i<=s.size()-allWordsLen;i++)
        {
            string ss=s.substr(i,allWordsLen);
            unordered_map<string, int > cpy(ump);
            bool flag=true;
            for(int j=0;j<allWordsLen;j+=v[0].size())
            {
                string curr=ss.substr(j,v[0].size());
                if(cpy[curr]==0)
                {
                    flag=false;
                    break;
                }
                cpy[curr]--;
            }
            if(flag)
                ans.push_back(i);
        }
        return ans;
    }
};
