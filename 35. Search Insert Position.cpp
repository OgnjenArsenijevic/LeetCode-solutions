///35. Search Insert Position
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int searchInsert(vector<int>& v, int target) 
    {
        if(v.size()==0) return 0;
        if(v.size()==1)
        {
            if(target<=v[0]) return 0;
            return 1;
        }
        int low=0;
        int high=v.size()-1;
        while(low<high)
        {
            int mid=(low+high)/2;
            if(v[mid]==target) return mid;
            if(v[mid]>target) high=mid-1;
            else low=mid+1;
        }
        if(target>v[low]) return low+1;
        return low;
    }
};
