///179. Largest Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    static bool compare(string s, string ss)
    {
        string a=s+ss;
        string b=ss+s;
        return a>b;
    }
    string largestNumber(vector<int>& v) 
    {
        vector<string> vv;
        for(int i=0;i<v.size();i++)
        {
            string s="";
            if(v[i]==0)
                s+="0";
            while(v[i]>0)
            {
                s+=(v[i]%10+'0');
                v[i]/=10;
            }
            reverse(s.begin(),s.end());
            vv.push_back(s);
        }
        sort(vv.begin(),vv.end(),compare);
        string ans="";
        for(int i=0;i<vv.size();i++)
            ans+=vv[i];
        int cnt=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]=='0')
                cnt++;
        }
        if(cnt==ans.size())
            ans="0";
        return ans;
    }
};
