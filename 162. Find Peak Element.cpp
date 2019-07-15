///162. Find Peak Element
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int findPeakElement(vector<int>& v) 
    {
        if(v.size()==1) return 0;
        if(v[0]>v[1]) return 0;
        for(int i=1;i<v.size()-1;i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
                return i;
        }
        return v.size()-1;
    }
};
