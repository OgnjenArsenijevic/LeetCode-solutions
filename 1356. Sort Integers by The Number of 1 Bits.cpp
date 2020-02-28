///1356. Sort Integers by The Number of 1 Bits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int oneBits(int num)
    {
        int ans=0;
        while(num)
        {
            if(num&1)
                ans++;
            num>>=1;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int>& arr) 
    {
        vector<pair<int,int> > v;
        for(int i=0;i<arr.size();i++)
            v.push_back(make_pair(oneBits(arr[i]),arr[i]));
        sort(v.begin(),v.end());
        arr.clear();
        for(int i=0;i<v.size();i++)
            arr.push_back(v[i].second);
        return arr;
    }
};
