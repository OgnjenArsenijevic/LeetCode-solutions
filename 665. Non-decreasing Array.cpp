///665. Non-decreasing Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool checkPossibility(vector<int>& v)
    {
        int idx=-1;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>v[i+1])
            {
                if(idx!=-1) return false;
                idx=i;
            }
        }
        return (idx==-1 || idx==0 || idx==v.size()-2 || v[idx-1]<=v[idx+1] || v[idx]<=v[idx+2]);
    }
};
