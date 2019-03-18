///969. Pancake Sorting
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxIdx(vector<int> v,int n)
    {
        int maxi=INT_MIN;
        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]>maxi)
            {
                maxi=v[i];
                idx=i;
            }
        }
        return idx;
    }
    vector<int> pancakeSort(vector<int>& v) 
    {
        vector<int> ans;
        int br=v.size();
        while(br>1)
        {
            int idx=maxIdx(v,br);
            if(idx!=br-1)
            {
                int l=0,r=idx;
                while(l<r)
                    swap(v[l++],v[r--]);
                l=0;
                r=br-1;
                while(l<r)
                    swap(v[l++],v[r--]);
                ans.push_back(idx+1);
                ans.push_back(br);
            }
            br--;
        }
        return ans;
    }
};
