///1004. Max Consecutive Ones III
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int longestOnes(vector<int>& v, int k) 
    {
        int cnt=0,l=0,ans=0;
        for(int r=0;r<v.size();r++)
        {
            if(v[r]==0) cnt++;
            while(cnt>k)
            {
                if(v[l++]==0) cnt--;
            }
            if(r-l+1>ans) ans=r-l+1;
        }
        return ans;
    }
};
