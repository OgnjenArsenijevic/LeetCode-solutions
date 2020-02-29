///739. Daily Temperatures
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int>& v) 
    {
        vector<int> ans(v.size(),0);
        stack<int> st;
        for(int i=v.size()-1;i>=0;i--)
        {
            while(!st.empty() && v[i]>=v[st.top()]) st.pop();
            ans[i]=(!st.empty() ? st.top()-i : 0);
            st.push(i);
        }
        return ans;
    }
};
