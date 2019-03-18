///957. Prison Cells After N Days
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> prisonAfterNDays(vector<int>& v, int N)
    {
        string s="";
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
                s+='1';
            else
                s+='0';
        }
        int cnt=1;
        map<string,int> m;
        for(int i=1;i<=N;i++)
        {
            string ss="0";
            for(int j=1;j<7;j++)
            {
                if(s[j-1]==s[j+1])
                    ss+="1";
                else
                    ss+="0";
            }
            ss+="0";
            s=ss;
            if(m[s]==0)
                m[s]=cnt++;
            else
                break;
        }
        cnt--;
        vector<int> ans;
        if(cnt==0)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='0')
                    ans.push_back(0);
                else
                    ans.push_back(1);
            }
            return ans;
        }
        if(cnt!=N)
            N%=cnt;
        if(N==0)
            N=cnt;
        for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
        {
            if(it->second==N)
            {
                s=it->first;
                break;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                ans.push_back(0);
            else
                ans.push_back(1);
        }
        return ans;
    }
};
