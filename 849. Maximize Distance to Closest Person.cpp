///849. Maximize Distance to Closest Person
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxDistToClosest(vector<int>& seats)
    {
        int arr[seats.size()];
        int curr=1e9;
        for(int i=seats.size()-1;i>=0;i--)
        {
            if(seats[i]==1)
                curr=i;
            arr[i]=curr-i;
        }
        curr=-1e9;
        for(int i=0;i<seats.size();i++)
        {
            if(seats[i]==1)
                curr=i;
            arr[i]=min(arr[i],i-curr);
        }
        return *max_element(arr,arr+seats.size());
    }
};
