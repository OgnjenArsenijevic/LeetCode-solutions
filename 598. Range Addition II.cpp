///598. Range Addition II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) 
    {
        for(int i=0;i<ops.size();i++)
        {
            m=min(m,ops[i][0]);
            n=min(n,ops[i][1]);
        }
        return n*m;
    }
};
