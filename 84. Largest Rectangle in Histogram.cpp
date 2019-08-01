///84. Largest Rectangle in Histogram
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int largestRectangleArea(vector<int>& v) 
    {
        stack<int> st;
        int ans=0,curr,top,i=0;
        while(i<v.size())
        {
            if(st.empty() || v[st.top()]<=v[i])
                st.push(i++);
            else
            {
                top=st.top();
                st.pop();
                curr=v[top]*(!st.empty() ? i-st.top()-1 : i);
                ans=max(ans,curr);
            }
        }
        while(!st.empty())
        {
            top=st.top();
            st.pop();
            curr=v[top]*(!st.empty() ? i-st.top()-1 : i);
            ans=max(ans,curr);
        }
        return ans;
    }
};
