
///76. Minimum Window Substring
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string minWindow(string s, string t) 
    {
        if(s.size()==0 || t.size()==0) return "";
        unordered_map<char,int> ump;
        for(int i=0;i<t.size();i++)
            ump[t[i]]++;
        int l=0,r=0,cnt=0,ansL=-1,ansR=-1,ans=INT_MAX;
        unordered_map<char,int> currCount;
        while(r<s.size())
        {
            currCount[s[r]]++;
            if(ump.find(s[r])!=ump.end() && currCount[s[r]]==ump[s[r]])
                cnt++;
            while(l<=r && cnt==ump.size())
            {
                if(r-l+1<ans)
                {
                    ans=r-l+1;
                    ansL=l;
                    ansR=r;
                }
                currCount[s[l]]--;
                if(ump.find(s[l])!=ump.end() && currCount[s[l]]+1==ump[s[l]])
                    cnt--;
                l++;
            }
            r++;
        }
        if(ansL==-1 || ansR==-1) return "";
        string ss="";
        for(int i=ansL;i<=ansR;i++)
            ss+=s[i];
        return ss;
    }
};
