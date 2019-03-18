///668. Kth Smallest Number in Multiplication Table
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool can(int m,int n,int num, int k)
    {
        int cnt=0;
        for(int i=1;i<=m;i++)
            cnt+=min(n,num/i);
        return cnt>=k;
    }
    int findKthNumber(int m, int n, int k) 
    {
        int low=1,high=m*n;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(can(m,n,mid,k))
                high=mid;
            else
                low=mid+1;
        }
        return low;
    }
};
