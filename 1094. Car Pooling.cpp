///1094. Car Pooling
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        int arr[1005];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<trips.size();i++)
        {
            arr[trips[i][1]]+=trips[i][0];
            arr[trips[i][2]]-=trips[i][0];
        }
        int curr=0;
        for(int i=0;i<1005;i++)
        {
            curr+=arr[i];
            if(curr>capacity)
                return false;
        }
        return true;
    }
};
