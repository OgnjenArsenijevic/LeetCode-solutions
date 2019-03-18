///611. Valid Triangle Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int triangleNumber(vector<int>& v)
    {
        if(v.size()<3) return 0;
        sort(v.begin(),v.end());
        int start=0,ans=0;
        while(v[start]==0 && start<v.size()) start++;
        for(int i=start;i<v.size()-2;i++)
        {
            int k=i+2;
            for(int j=i+1;j<v.size()-1;j++)
            {
                while(k<v.size() && v[i]+v[j]>v[k])
                    k++;
                ans+=k-j-1;
            }
        }
        return ans;
    }
};
