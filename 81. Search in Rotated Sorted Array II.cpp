///81. Search in Rotated Sorted Array II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool search(vector<int>& v, int target) 
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==target)
                return true;
        }
        return false;
    }
};
