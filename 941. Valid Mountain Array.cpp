///941. Valid Mountain Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool validMountainArray(vector<int>& v) 
    {
        if(v.size()<3) return false;
        int topIdx=0;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==v[i-1])
                return false;
            if(v[i]>v[i-1])
                topIdx=i;
            else
                break;
        }
        if(topIdx==0 || topIdx==v.size()-1)
            return false;
        for(int i=topIdx+1;i<v.size();i++)
        {
            if(v[i]>=v[i-1])
                return false;
        }
        return true;
    }
};
