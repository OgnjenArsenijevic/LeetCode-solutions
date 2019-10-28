///1207. Unique Number of Occurrences
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        unordered_map<int,int> ump;
        for(int i=0;i<arr.size();i++)
            ump[arr[i]]++;
        unordered_set<int> ust;
        for(unordered_map<int,int>::iterator it=ump.begin();it!=ump.end();it++)
            ust.insert(it->second);
        return ust.size()==ump.size();
    }
};
