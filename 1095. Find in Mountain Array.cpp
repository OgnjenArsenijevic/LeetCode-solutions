///1095. Find in Mountain Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */
class Solution
{
public:
    int findInMountainArray(int target, MountainArray &mountainArr)
    {
        int l=0,r=mountainArr.length()-1,idx=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
           // cout<<l<<" "<<r<<" "<<mid<<"\n";
            if(mid==0)
            {
                l=mid+1;
                continue;
            }
            int curr=mountainArr.get(mid),currL=mountainArr.get(mid-1),currR=mountainArr.get(mid+1);
            if(mid==mountainArr.length()-1)
            {
                r=mid-1;
                continue;
            }
            if(curr>currL && curr>currR)
            {
                idx=mid;
                break;
            }
            if(curr>currL && curr<currR)
                l=mid+1;
            else
                r=mid-1;
        }
        l=0;
        r=idx;
       // cout<<idx<<"idx\n";
        while(l<=r)
        {
            int mid=(l+r)/2;
          //  cout<<l<<" "<<r<<" "<<mid<<" a\n";
            int curr=mountainArr.get(mid);
            if(curr==target)
                return mid;
            if(curr>target)
                r=mid-1;
            else
                l=mid+1;
        }
        l=idx+1;
        r=mountainArr.length()-1;
        while(l<=r && l>=idx+1)
        {
            int mid=(l+r)/2;
          //  cout<<l<<" "<<r<<" "<<mid<<" e\n";
            int curr=mountainArr.get(mid);
            if(curr==target)
                return mid;
            if(curr<target)
                r=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
};
