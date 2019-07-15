///697. Degree of an Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int findShortestSubArray(vector<int>& v) 
    {
        unordered_map<int,int> um;
        unordered_map<int,int> umf;
        unordered_map<int,int> uml;
        for(int i=0;i<v.size();i++)
        {
            if(um[v[i]]==0)
                umf[v[i]]=i;
            um[v[i]]++;
            uml[v[i]]=i;
        }
        int maxi=0,ans=INT_MAX;
        for(unordered_map<int,int>::iterator it=um.begin();it!=um.end();it++)
            maxi=max(maxi,it->second);
        for(unordered_map<int,int>::iterator it=um.begin();it!=um.end();it++)
        {
            if(it->second==maxi)
                ans=min(ans,uml[it->first]-umf[it->first]+1);
        }
        return ans;
    }
};
