///1287. Element Appearing More Than 25% In Sorted Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findSpecialInteger(vector<int>& arr)
    {
        if(arr.size()==1)
            return arr[0];
        int cnt=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
                cnt++;
            else
                cnt=1;
            if(cnt>arr.size()/4)
                return arr[i];
        }
        return -1;
    }
};
