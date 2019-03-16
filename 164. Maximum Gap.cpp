///164. Maximum Gap
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxNumOfDigits(vector<int> v)
    {
        int maxi=0;
        for(int i=0;i<v.size();i++)
        {
            int cnt=0;
            while(v[i]>0)
            {
                v[i]/=10;
                cnt++;
            }
            if(cnt>maxi) maxi=cnt;
        }
        return maxi;
    }
    void radixSort(vector<int>& v)
    {
        int k=maxNumOfDigits(v);
        int divBeforeMod=1;
        while(k--)
        {
            vector<int> vv[10];
            for(int i=0;i<v.size();i++)
                vv[(v[i]/divBeforeMod)%10].push_back(v[i]);
            int idx=0;
            for(int i=0;i<10;i++)
            {
                for(int j=0;j<vv[i].size();j++)
                    v[idx++]=vv[i][j];
            }
            divBeforeMod*=10;
        }
    }
    int maximumGap(vector<int>& v) 
    {
        if(v.size()==0) return 0;
        radixSort(v);
        int ans=0;
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i+1]-v[i]>ans)
                ans=v[i+1]-v[i];
        }
        return ans;
    }
};
