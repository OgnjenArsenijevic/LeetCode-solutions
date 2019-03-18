///967. Numbers With Same Consecutive Differences
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> numsSameConsecDiff(int n, int k) 
    {
        vector<int> v;
        vector<int> copy;
        if(n==1)
        {
            for(int i=0;i<10;i++)
                v.push_back(i);
            return v;
        }
        for(int i=1;i<10;i++)
            v.push_back(i);
        n--;
        while(n--)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]%10+k<10)
                    copy.push_back(v[i]*10+v[i]%10+k);
                if(v[i]%10-k>=0 && k!=0)
                    copy.push_back(v[i]*10+v[i]%10-k);
            }
            v.clear();
            for(int i=0;i<copy.size();i++)
                v.push_back(copy[i]);
            copy.clear();
        }
        return v;
    }
};
