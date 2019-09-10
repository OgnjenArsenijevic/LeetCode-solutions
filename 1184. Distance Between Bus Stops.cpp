///1184. Distance Between Bus Stops
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int distanceBetweenBusStops(vector<int>& v, int st, int en)
    {
        if(en<st)
            swap(st,en);
        int sum=0;
        for(int i=st;i<en;i++)
            sum+=v[i];
        int sum1=0;
        for(int i=en;i<v.size();i++)
            sum1+=v[i];
        for(int i=0;i<st;i++)
            sum1+=v[i];
        return min(sum,sum1);
    }
};
