///716. Max Stack
///Author: Ognjen Arsenijevic
///username: ognjen1998
class MaxStack 
{
public:
    /** initialize your data structure here. */
    stack<int> st;
    stack<int> maxSt;
    MaxStack() 
    {
        
    }
    
    void push(int x) 
    {
        if(st.empty() || maxSt.top()<=x)
            maxSt.push(x);
        else
            maxSt.push(maxSt.top());
        st.push(x);
    }
    
    int pop() 
    {
        int ans=st.top();
        st.pop();
        maxSt.pop();
        return ans;
    }
    
    int top() 
    {
        return st.top();    
    }
    
    int peekMax() 
    {
        return maxSt.top();    
    }
    
    int popMax() 
    {
        int maxi=maxSt.top();
        stack<int> tmp;
        while(st.top()!=maxi)
        {
            tmp.push(st.top());
            st.pop();
            maxSt.pop();
        }
        st.pop();
        maxSt.pop();
        while(!tmp.empty())
        {
            st.push(tmp.top());
            if(maxSt.empty() || tmp.top()>maxSt.top())
                maxSt.push(tmp.top());
            else
                maxSt.push(maxSt.top());
            tmp.pop();
        }
        return maxi;
    }
};

/**
 * Your MaxStack object will be instantiated and called as such:
 * MaxStack* obj = new MaxStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->peekMax();
 * int param_5 = obj->popMax();
 */
