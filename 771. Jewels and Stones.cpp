///771. Jewels and Stones
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int numJewelsInStones(string J, string S) 
    {
        map<char, int> m;
        for(int i=0;i<J.size();i++)
            m[J[i]]++;
        int ans=0;
        for(int i=0;i<S.size();i++)
        {
            if(m[S[i]]==1)
                ans++;
        }
        return ans;
    }
};
