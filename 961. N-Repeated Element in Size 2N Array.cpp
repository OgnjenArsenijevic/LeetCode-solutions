///961. N-Repeated Element in Size 2N Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int repeatedNTimes(vector<int>& v) 
    {
        map<int,int> m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
            if(m[v[i]]>1) return v[i];
        }
    }
};
