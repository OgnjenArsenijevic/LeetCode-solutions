///32. Longest Valid Parentheses
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int longestValidParentheses(string s) 
    {
        int ans=0;
        stack<int> st;
        st.push(-1);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push(i);
            else
            {
                st.pop();
                if(!st.empty())
                    ans=max(ans,i-st.top());
                else
                    st.push(i);
            }
        }
        return ans;
    }
};
