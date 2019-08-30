///682. Baseball Game
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int stringToNum(string s)
    {
        int ans=0;
        int start=0;
        if(s[0]=='-')
            start=1;
        for(int i=start;i<s.size();i++)
        {
            ans*=10;
            ans+=(s[i]-'0');
        }
        if(start==1)
            return -ans;
        return ans;
    }
    int calPoints(vector<string>& v) 
    {
        int ans=0;
        stack<int> st;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]=="+")
            {
                int top=st.top();
                st.pop();
                int top1=top+st.top();
                st.push(top);
                st.push(top1);
            }
            if(v[i]=="C")
                st.pop();
            if(v[i]=="D")
                st.push(2*st.top());
            if(v[i]!="+" && v[i]!="C" && v[i]!="D")
                st.push(stringToNum(v[i]));
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
