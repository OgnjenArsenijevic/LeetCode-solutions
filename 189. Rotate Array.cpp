///189. Rotate Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    void rotate(vector<int>& v, int k) 
    {
        k%=v.size();
        vector<int> vv;
        for(int i=v.size()-k;i<v.size();i++)
            vv.push_back(v[i]);
        for(int i=0;i<v.size()-k;i++)
            vv.push_back(v[i]);
        v=vv;
        return;
    }
};
