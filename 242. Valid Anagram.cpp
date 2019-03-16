///242. Valid Anagram
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<s.size();i++)
            arr[s[i]-'a']++;
        for(int i=0;i<t.size();i++)
            arr[t[i]-'a']--;
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0) return false;
        }
        return true;
    }
};
