///381. Insert Delete GetRandom O(1) - Duplicates allowed
///Author: Ognjen Arsenijevic
///username: ognjen1998
class RandomizedCollection 
{
public:
    /** Initialize your data structure here. */
    unordered_multimap<int,int> ump;
    RandomizedCollection() 
    {
    }
    
    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
    bool insert(int val) 
    {
        ump.insert(make_pair(val,val));
        return true;
    }
    
    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
    bool remove(int val) 
    {
        if(ump.find(val)==ump.end()) return false;
        ump.erase(ump.find(val));
        return true;
    }
    
    /** Get a random element from the collection. */
    int getRandom() 
    {
        unordered_multimap<int,int>::iterator it=ump.begin();
        int val=rand()%ump.size();
        advance(it,val);
        return it->second;
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
