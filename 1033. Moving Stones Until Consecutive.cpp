///1033. Moving Stones Until Consecutive
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> numMovesStones(int a, int b, int c) 
    {
        int arr[3];
        int mini=1;
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        sort(arr,arr+3);
        if(arr[0]==arr[1]-1 && arr[0]==arr[2]-2)
            mini=0;
        if(arr[1]>arr[0]+2 && arr[2]>arr[1]+2)
            mini=2;
        int maxi=arr[2]-arr[1]-1+arr[1]-arr[0]-1;
        
        vector<int> ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};
