///728. Self Dividing Numbers
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> ans;
        for (int i=left;i<=right;i++) 
        {
            int n;
            for (n=i;n>0;n/=10)
            {
                if (n % 10==0 || i % (n % 10)!=0) break;
            }    
            if (n==0) ans.push_back(i);
        }
        return ans;
    }
};
