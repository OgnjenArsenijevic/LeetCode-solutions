///526. Beautiful Arrangement
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int ans;
    int arr[16];
    void solve(int curr,int n)
    {
        if(curr==n+1)
        {
            ans++;
            return;
        }
        for(int i=1;i<=n;i++)
        {
            if(curr%i!=0 && i%curr!=0) continue;
            bool flag=true;
            for(int j=1;j<curr;j++)
            {
                if(arr[j]==i)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                arr[curr]=i;
                solve(curr+1,n);
            }
        }
    }
    int countArrangement(int n) 
    {
        solve(1,n);
        return ans;
    }
};
