///1347. Minimum Number of Steps to Make Two Strings Anagram
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minSteps(string s, string t) 
    {
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        int ans=0;
        for(int i=0;i<26;i++)
            ans+=(arr[i]>0 ? arr[i] : 0);
        return ans;
    }
};
