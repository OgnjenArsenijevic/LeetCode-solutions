///238. Product of Array Except Self
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& v)
    {
        int left[100000];
        int right[100000];
        vector<int> ans;
        if(v.size()==0)
            return v;
        left[0]=1;
        for(int i=1;i<v.size();i++)
            left[i]=left[i-1]*v[i-1];
        right[v.size()-1]=1;
        for(int i=v.size()-2;i>=0;i--)
        {
            right[i]=right[i+1]*v[i+1];
        }
        for(int i=0;i<v.size();i++)
            ans.push_back(left[i]*right[i]);
        return ans;
    }
};
