///27. Remove Element
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int removeElement(vector<int>& v, int val) 
    {
        vector<int> vv;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=val)
                vv.push_back(v[i]);
        }
        for(int i=0;i<vv.size();i++)
            v[i]=vv[i];
        return vv.size();
    }
};
