///75. Sort Colors
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    void sortColors(vector<int>& v) 
    {
        int l=0,r=v.size()-1;
        for(int i=0;i<=r;i++)
        {
            if(v[i]==0)
                swap(v[l++],v[i]);
            if(v[i]==2)
                swap(v[r--],v[i--]);
        }
    }
};
