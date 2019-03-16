///3. Longest Substring Without Repeating Characters
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int ans=0;
        int arr[128];
        memset(arr,0,sizeof(arr));
        for(int j=0,i=0;j<s.size();j++)
        {
            i=max(arr[s[j]],i);
            ans=max(ans,j-i+1);
            arr[s[j]]=j+1;
        }
        return ans;
    }
};
