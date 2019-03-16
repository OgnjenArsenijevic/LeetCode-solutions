///41. First Missing Positive
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int longest(vector<int>& v)
    {
        int maxi=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<0)
            {
                v[i]=0;
                continue;
            }
            int cnt=0,br=v[i];
            while(br>0)
            {
                br/=10;
                cnt++;
            }
            if(cnt>maxi)
                maxi=cnt;
        }
        return maxi;
    }
    void radixSort(vector<int>& v)
    {
        int sz=longest(v),div=1;
        while(sz)
        {
            vector<int> vv[10];
            for(int i=0;i<v.size();i++)
                vv[(v[i]/div)%10].push_back(v[i]);
            div*=10;
            sz--;
            int idx=0;
            for(int i=0;i<10;i++)
            {
                for(int j=0;j<vv[i].size();j++)
                    v[idx++]=vv[i][j];
            }
        }
    }
    int firstMissingPositive(vector<int>& v) 
    {
        radixSort(v);
        int br=1;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>br) return br;
            else
            {
                if(v[i]==br) br++;
            }
        }
        return br;
    }
};
