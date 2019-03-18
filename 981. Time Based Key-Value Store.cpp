///981. Time Based Key-Value Store
///Author: Ognjen Arsenijevic
///username: ognjen1998
class TimeMap
{
public:
    /** Initialize your data structure here. */
    vector<map<int, string> > v;
    map<string, int> idx;
    map<string, bool> exists;
    int curr=0;
    TimeMap() 
    {
        
    }
    
    void set(string key, string value, int timestamp) 
    {
        if(exists[key])
            v[idx[key]][timestamp]=value;
        else
        {
            map<int,string> tmp;
            v.push_back(tmp);
            v[curr][timestamp]=value;
            exists[key]=true;
            idx[key]=curr++;
        }
    }
    
    string get(string key, int timestamp) 
    {
        if(!exists[key])
            return "";
        map<int,string>::iterator it=v[idx[key]].upper_bound(timestamp);
        it--;
        return (it->first<=timestamp ? it->second : "");
              
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
