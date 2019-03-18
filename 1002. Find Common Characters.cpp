///1002. Find Common Characters
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<string> commonChars(vector<string>& v) 
    {
        int mini[26];
        vector<string> ans;
        if(v.size()==0) return ans;
        memset(mini,63,sizeof(mini));
        for(int i=0;i<v.size();i++)
        {
            int arr[26];
            memset(arr,0,sizeof(arr));
            for(int j=0;j<v[i].size();j++)
                arr[v[i][j]-'a']++;
            for(int j=0;j<26;j++)
                mini[j]=min(mini[j],arr[j]);
        }
        for(int i=0;i<26;i++)
        {
            while(mini[i]>0)
            {
                string ss="";
                ss+=(char)(i+'a');
                ans.push_back(ss);
                mini[i]--;
            }
        }
        return ans;
    }
};
