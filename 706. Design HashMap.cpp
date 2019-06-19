///706. Design HashMap
///Author: Ognjen Arsenijevic
///username: ognjen1998
class MyHashMap {
public:
    /** Initialize your data structure here. */
    map<int,int> mp;
    MyHashMap()  
    {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) 
    {
        mp[key]=value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) 
    {
        if(mp.find(key)!=mp.end())
            return mp[key];
        else
            return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) 
    {
        mp[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
