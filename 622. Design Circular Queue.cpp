///622. Design Circular Queue
///Author: Ognjen Arsenijevic
///username: ognjen1998
class MyCircularQueue 
{
public:
    deque<int> dq;
    int sz;
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) 
    {
        sz=k;    
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) 
    {
        if(dq.size()==sz) return false;
        dq.push_back(value);
        return true;    
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() 
    {
        if(dq.empty()) return false;
        dq.pop_front();
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() 
    {
        if(dq.empty()) return -1;
        return dq.front();    
    }
    
    /** Get the last item from the queue. */
    int Rear() 
    {
        if(dq.empty()) return -1;
        return dq.back();      
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() 
    {
        return dq.empty();
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() 
    {
        return dq.size()==sz;      
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
