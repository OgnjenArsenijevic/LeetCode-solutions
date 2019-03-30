///763. Partition Labels
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> partitionLabels(string s) 
    {
        vector<int> ans;
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<s.size();i++)
            arr[s[i]-'a']=i;
        int cnt=0,reset=-1;
        for(int i=0;i<s.size();i++)
        {
            if(arr[s[i]-'a']>reset)
                reset=arr[s[i]-'a'];
            cnt++;
            if(i==reset)
            {
                ans.push_back(cnt);
                cnt=0;
            }
        }
        return ans;
    }
};
