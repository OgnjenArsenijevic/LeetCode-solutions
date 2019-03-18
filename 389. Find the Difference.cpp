///389. Find the Difference
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    char findTheDifference(string s, string t) 
    {
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<t.size();i++)
            arr[t[i]-'a']++;
        for(int i=0;i<s.size();i++)
            arr[s[i]-'a']--;
        for(int i=0;i<26;i++)
        {
            if(arr[i]==1)
                return (char)(i+(int)'a');
        }
        
    }
};
