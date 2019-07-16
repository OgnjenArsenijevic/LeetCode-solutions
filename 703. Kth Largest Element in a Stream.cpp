///703. Kth Largest Element in a Stream
///Author: Ognjen Arsenijevic
///username: ognjen1998
class KthLargest 
{
public:
    multiset<int> ms;
    int kk;
    KthLargest(int k, vector<int>& v) 
    {
        kk=k;
        for(int i=0;i<v.size();i++)
            ms.insert(v[i]);
    }
    
    int add(int val) 
    {
        ms.insert(val);
        int idx=0;
        for(multiset<int>::iterator it=ms.begin();it!=ms.end();it++)
        {
            if(ms.size()-idx==kk)
                return *it;
            idx++;
        }
        return -1;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
