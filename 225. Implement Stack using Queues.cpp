///225. Implement Stack using Queues
///Author: Ognjen Arsenijevic
///username: ognjen1998
class MyStack 
{
public:
    /** Initialize your data structure here. */
    vector<int> v;
    MyStack() 
    {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) 
    {
        v.push_back(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() 
    {
        int val=v[v.size()-1];
        v.erase(v.begin()+v.size()-1);
        return val;
    }
    
    /** Get the top element. */
    int top()
    {
        return v[v.size()-1];
    }
    
    /** Returns whether the stack is empty. */
    bool empty() 
    {
        return v.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
