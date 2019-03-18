///402. Remove K Digits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int cnt;
    stack<int> st;
    string removeKdigits(string s, int k) 
    {
        for(int i=0;i<s.size();i++)
        {
            int num=(s[i]-'0');
            if(st.empty())
                st.push(num);
            else
            {
                bool bb=!st.empty();
                while(!st.empty() && st.top()>num && cnt<k)
                {
                    st.pop();
                    cnt++;
                }
                st.push(num);
            }
        }
        while(!st.empty() && cnt<k)
        {
            st.pop();
            cnt++;
        }
        string ans="";
        while(!st.empty())
        {
            ans+=(char)(st.top()+'0');
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        string ans1="";
        int start=0;
        while(ans[start]=='0') start++;
        for(int i=start;i<ans.size();i++)
            ans1+=ans[i];
        if(ans1=="") return "0";
        return ans1;
    }
};
