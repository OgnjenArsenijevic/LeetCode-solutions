///81. Search in Rotated Sorted Array II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int search(vector<int>& v, int target) 
    {
        int low=0,high=v.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(v[mid]==target)
                return mid;
            if(v[mid]>target)
            {
                if(v[mid]>=v[low] && v[mid]>=v[high] && v[low]>target)
                    low=mid+1;
                else
                    high=mid-1;
            }
            else
            {
                if(v[mid]<=v[low] && v[mid]<=v[high] && v[high]<target)
                     high=mid-1;
                else
                    low=mid+1;
            }
        }
        return -1;
    }
};
