///155. Min Stack
///Author: Ognjen Arsenijevic
///username: ognjen1998
class MinStack 
{
public:
    stack<long long> st;
    long long mini;
    /** initialize your data structure here. */
    MinStack() 
    {
        
    }
    
    void push(int x) 
    {
        if(st.empty())
        {
            st.push((long long)x);
            mini=x;
            return;
        }
        if(x<mini)
        {
            st.push(2LL*x-mini);
            mini=(long long)x;
        }
        else
            st.push((long long)x);
    }
    
    void pop()
    {
        long long t=st.top();
        if(t<mini) mini=2*mini-t;
        st.pop();
    }
    
    int top() 
    {
        if(st.top()<mini) return mini;
        return st.top();
    }
    
    int getMin() 
    {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
