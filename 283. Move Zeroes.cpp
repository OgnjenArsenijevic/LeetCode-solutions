///283. Move Zeroes
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    void moveZeroes(vector<int>& v) 
    {
        int curr=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=0)
                v[curr++]=v[i];
        }
        while(curr<v.size())
            v[curr++]=0;
    }
};
