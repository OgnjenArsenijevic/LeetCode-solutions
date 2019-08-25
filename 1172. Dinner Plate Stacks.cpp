///1172. Dinner Plate Stacks
///Author: Ognjen Arsenijevic
///username: ognjen1998
class DinnerPlates 
{
public:
    set<int> st;
    set<int> inUse;
    stack<int> stArr[200005];
    int cap;
    int idxPop=-1;
    DinnerPlates(int capacity) 
    {
        cap=capacity;
        for(int i=0;i<=200000;i++)
            st.insert(i);
    }
    
    void push(int val) 
    {
        int idx=*st.begin();
        inUse.insert(idx);
        stArr[idx].push(val);
        if(stArr[idx].size()==cap)
            st.erase(idx);
        idxPop=max(idxPop,idx);
    }
    
    int pop() 
    {
        if(idxPop==-1) return -1;
        int val=stArr[idxPop].top();
        stArr[idxPop].pop();
        if(stArr[idxPop].size()==cap-1)
            st.insert(idxPop);
        if(stArr[idxPop].size()==0)
            inUse.erase(idxPop);
        if(inUse.empty())
            idxPop=-1;
        else
        {
            set<int>::iterator it=inUse.end();
            it--;
            idxPop=*it;
        }
        return val;
    }
    
    int popAtStack(int index) 
    {
        if(stArr[index].size()==0) return -1;
        int val=stArr[index].top();
        stArr[index].pop();
        if(stArr[index].size()==cap-1)
        {
            st.insert(index);
            if(index==idxPop)
            {
                if(stArr[idxPop].size()==0)
                    inUse.erase(idxPop);
                if(inUse.empty())
                    idxPop=-1;
                else
                {
                    set<int>::iterator it=inUse.end();
                    it--;
                    idxPop=*it;
                }
            }
        }    
        return val;
    }
};

/**
 * Your DinnerPlates object will be instantiated and called as such:
 * DinnerPlates* obj = new DinnerPlates(capacity);
 * obj->push(val);
 * int param_2 = obj->pop();
 * int param_3 = obj->popAtStack(index);
 */
