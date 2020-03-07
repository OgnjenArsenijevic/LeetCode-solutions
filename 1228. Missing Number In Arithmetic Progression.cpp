///1228. Missing Number In Arithmetic Progression
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int missingNumber(vector<int>& arr) 
    {
        int n=(int)arr.size();
        int d=(arr[n-1]-arr[0])/n;
        int low=0,high=n-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(arr[0]+mid*d==arr[mid])
                low=mid+1;
            else
                high=mid;
        }
        return arr[0]+low*d;
    }
};
