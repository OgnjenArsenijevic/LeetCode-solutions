///740. Delete and Earn
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int deleteAndEarn(vector<int>& v) 
    {
        int arr[10005];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<v.size();i++)
            arr[v[i]]++;
        int currMax=-1,take=0,pass=0;
        for(int i=0;i<10001;i++)
        {
            if(arr[i]>0)
            {
                int val=max(pass,take);
                if(i-1!=currMax)
                {
                    take=i*arr[i]+val;
                    pass=val;
                }
                else
                {
                    take=i*arr[i]+pass;
                    pass=val;
                }
                currMax=i;
            }
        }
        return max(pass,take);
    }
};
