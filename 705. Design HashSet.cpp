///705. Design HashSet
///Author: Ognjen Arsenijevic
///username: ognjen1998
class MyHashSet
{
public:
    /** Initialize your data structure here. */
    set<int> st;
    MyHashSet()
    {
        
    }
    
    void add(int key) 
    {
        st.insert(key);    
    }
    
    void remove(int key) 
    {
        st.erase(key);    
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key)
    {
        return st.find(key)!=st.end();    
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
