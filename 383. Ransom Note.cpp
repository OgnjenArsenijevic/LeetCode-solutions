///383. Ransom Note
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int arr[26],arr1[26];
    bool canConstruct(string s, string s1) 
    {
        for(int i=0;i<s.size();i++)
            arr[s[i]-'a']++;
        for(int i=0;i<s1.size();i++)
            arr1[s1[i]-'a']++;
        for(int i=0;i<26;i++)
        {
            if(arr[i]>arr1[i])
                return false;
        }
        return true;
    }
};
