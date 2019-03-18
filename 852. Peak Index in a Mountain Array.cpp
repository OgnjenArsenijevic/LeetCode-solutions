///852. Peak Index in a Mountain Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int peakIndexInMountainArray(vector<int>& v) 
    {
        int low=0,high=v.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(v[mid]>v[mid+1] && v[mid]>v[mid-1])
                return mid;
            if(v[mid]<v[mid-1])
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};
