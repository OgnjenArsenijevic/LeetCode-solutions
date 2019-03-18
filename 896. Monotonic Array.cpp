///896. Monotonic Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isMonotonic(vector<int>& v)
    {
        bool check1=true;
        bool check2=true;
        for(int i=1;i<v.size();i++)
        {
           if(v[i]<v[i-1])
               check1=false;
            if(v[i]>v[i-1])
                check2=false;
        }
        if(check1 || check2)
            return true;
        return false;
    }
};
