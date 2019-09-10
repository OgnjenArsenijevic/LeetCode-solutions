///1177. Can Make Palindrome from Substring
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int mat[100005][26];
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) 
    {
        vector<bool> ans;
        mat[0][s[0]-'a']++;
        for(int i=1;i<s.size();i++)
        {
            for(int j=0;j<26;j++)
                mat[i][j]=mat[i-1][j];
            mat[i][s[i]-'a']++;
        }
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            int k=queries[i][2];
            int cnt=0;
            for(int j=0;j<26;j++)
            {
                int diff=mat[r][j]-(l>0 ? mat[l-1][j] : 0);
                if(diff&1)
                    cnt++;
            }
            cnt/=2;
            if(cnt>k)
                ans.push_back(false);
            else
                ans.push_back(true);
        }
        return ans;
    }
};
