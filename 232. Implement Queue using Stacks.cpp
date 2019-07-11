///232. Implement Queue using Stacks
///Author: Ognjen Arsenijevic
///username: ognjen1998
class MyQueue 
{
public:
    /** Initialize your data structure here. */
    vector<int> v;
    MyQueue() 
    {
    }
    
    /** Push element x to the back of queue. */
    void push(int x) 
    {    
        v.push_back(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() 
    {
        int val=v[0];
        if(v.size()>0)
            v.erase(v.begin());
        return val;
    }
    
    /** Get the front element. */
    int peek() 
    {
        return v[0];    
    }
    
    /** Returns whether the queue is empty. */
    bool empty() 
    {
        return v.size()==0;    
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
