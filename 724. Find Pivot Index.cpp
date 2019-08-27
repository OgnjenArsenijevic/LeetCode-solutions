///724. Find Pivot Index
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int pivotIndex(vector<int>& v) 
    {
        int l=0,r=0;
        for(int i=0;i<v.size();i++)
            r+=v[i];
        for(int i=0;i<v.size();i++)
        {
            r-=v[i];
            if(l==r)
                return i;
            l+=v[i];
        }
        return -1;
    }
};
