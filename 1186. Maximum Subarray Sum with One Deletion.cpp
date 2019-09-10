///1186. Maximum Subarray Sum with One Deletion
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maximumSum(vector<int>& v) 
    {
        if(v.size()==0) return 0;
        int left[v.size()+1],right[v.size()+1],curr=v[0],maxi=v[0];
        left[0]=v[0];
        for(int i=1;i<v.size();i++)
        {
            curr=max(curr+v[i],v[i]);
            if(curr>maxi)
                maxi=curr;
            left[i]=curr;
        }
        curr=v[v.size()-1];
        right[v.size()-1]=v[v.size()-1];
        maxi=curr;
        for(int i=v.size()-2;i>=0;i--)
        {
            curr=max(curr+v[i],v[i]);
            if(curr>maxi)
                maxi=curr;
            right[i]=curr;
        }
        for(int i=1;i<v.size()-1;i++)
            maxi=max(maxi,left[i-1]+right[i+1]);
        return maxi;
    }
};
