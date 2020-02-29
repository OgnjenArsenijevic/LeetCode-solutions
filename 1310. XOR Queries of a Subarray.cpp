///1310. XOR Queries of a Subarray
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        vector<int> ans;
        vector<int> pref;
        if(arr.size()==0) return ans;
        pref.push_back(0);
        for(int i=0;i<arr.size();i++)
            pref.push_back(pref[i]^arr[i]);
        for(int i=0;i<queries.size();i++)
            ans.push_back(pref[queries[i][0]]^pref[queries[i][1]+1]);
        return ans;
    }
};
