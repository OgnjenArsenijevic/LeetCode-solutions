///169. Majority Element
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int majorityElement(vector<int>& v) 
    {
        if(v.size()==0) return 0;
        int candidate=v[0],cnt=1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==candidate)
                cnt++;
            else
                cnt--;
            if(cnt==0)
            {
                candidate=v[i];
                cnt++;
            }
        }
        return candidate;
    }
};
