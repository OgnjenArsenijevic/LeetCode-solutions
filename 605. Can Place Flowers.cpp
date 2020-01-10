///605. Can Place Flowers
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool canPlaceFlowers(vector<int>& f, int n)
    {
        int i=0,cnt=0;
        while(i<f.size())
        {
            if(f[i]==0 && (i==0 || f[i-1]==0) && (i==f.size()-1 || f[i+1]==0))
            {
                cnt++;
                f[i++]=1;
            }
            if(cnt>=n) return true;
            i++;
        }
        return false;
    }
};
