///26. Remove Duplicates from Sorted Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int removeDuplicates(vector<int>& v)
    {
        if(v.size()==0) return 0;
        if(v.size()==1) return 1;
        int pos=1,curr=v[0];
        for(int i=1;i<v.size();i++)
        {
            if(v[i]!=curr)
            {
                v[pos++]=v[i];
                curr=v[i];
            }
        }
        return pos;
    }
};
