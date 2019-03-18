///953. Verifying an Alien Dictionary
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isAlienSorted(vector<string>& words, string order) 
    {
        if(words.size()<2) return true;
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<order.size();i++)
            arr[order[i]-'a']=i;
        for(int i=1;i<words.size();i++)
        {
            bool check=true;
            for(int j=0;j<min(words[i].size(),words[i-1].size());j++)
            {
                if(arr[words[i-1][j]-'a']<arr[words[i][j]-'a'])
                {
                    check=false;
                    break;
                }
                if(arr[words[i-1][j]-'a']>arr[words[i][j]-'a'])
                    return false;
            }
            if(check)
            {
                if(words[i-1].size()>words[i].size())
                    return false;
            }
        }
        return true;
    }
};
