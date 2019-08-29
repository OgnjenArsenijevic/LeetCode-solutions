///748. Shortest Completing Word
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) 
    {
        int sz=1e9;
        string ans="";
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<licensePlate.size();i++)
        {
            licensePlate[i]=tolower(licensePlate[i]);
            if(licensePlate[i]>='a' && licensePlate[i]<='z')
                arr[licensePlate[i]-'a']++;
        }
        for(int i=0;i<words.size();i++)
        {
            int arr1[26];
            memset(arr1,0,sizeof(arr1));
            for(int j=0;j<words[i].size();j++)
                arr1[words[i][j]-'a']++;
            bool flag=true;
            for(int j=0;j<26;j++)
            {
                if(arr1[j]<arr[j])
                {
                    flag=false;
                    break;
                }
            }
            if(flag && words[i].size()<sz)
            {
                ans=words[i];
                sz=ans.size();
            }
        }
        return ans;
    }
};
