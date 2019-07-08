///1109. Corporate Flight Bookings
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int arr[20005];
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) 
    {
        vector<int> ans;
        int curr=0;
        for(int i=0;i<bookings.size();i++)
        {
            arr[bookings[i][0]-1]+=bookings[i][2];
            arr[bookings[i][1]]-=bookings[i][2];
        }
        for(int i=0;i<n;i++)
        {
            curr+=arr[i];
            ans.push_back(curr);
        }
        return ans;
    }
};
