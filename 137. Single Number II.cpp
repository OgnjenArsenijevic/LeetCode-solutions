///137. Single Number II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int singleNumber(vector<int>& v) 
    {
        unordered_map<int,int> um;
        for(int i=0;i<v.size();i++)
            um[v[i]]++;
        for(unordered_map<int,int>::iterator it=um.begin();it!=um.end();it++)
        {
            if(it->second==1)
                return it->first;
        }
        return -1;
    }
};
