///380. Insert Delete GetRandom O(1)
///Author: Ognjen Arsenijevic
///username: ognjen1998
class RandomizedSet
{
public:
    unordered_map<int,int> ump;
    /** Initialize your data structure here. */
    RandomizedSet() 
    {    
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) 
    {
        if(ump.find(val)!=ump.end()) return false;
        ump[val]=val;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) 
    {
        if(ump.find(val)==ump.end()) return false;
        ump.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() 
    {
        unordered_map<int,int>::iterator it=ump.begin();
        int val=rand()%ump.size();
        advance(it,val);
        return it->second;    
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
