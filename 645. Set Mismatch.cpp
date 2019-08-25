///645. Set Mismatch
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> findErrorNums(vector<int>& v)
    {
        int arr[10005],first,second;
        memset(arr,0,sizeof(arr));
        for(int i=0;i<v.size();i++)
            arr[v[i]]++;
        for(int i=1;i<=v.size();i++)
        {
            if(arr[i]>1)
                first=i;
            if(arr[i]<1)
                second=i;
        }
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};
