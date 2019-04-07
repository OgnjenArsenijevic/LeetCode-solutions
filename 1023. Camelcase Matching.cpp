///1023. Camelcase Matching
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) 
    {
        vector<bool> ans;
        for(int i=0;i<queries.size();i++)
        {
            int curr=0;
            for(int j=0;j<queries[i].size();j++)
            {
                if(curr<pattern.size() && queries[i][j]==pattern[curr])
                    curr++;
                else
                {
                    if(queries[i][j]<'a' || queries[i][j]>'z')
                    {
                        curr=-1;
                        break;
                    }    
                }
            }
            if(curr==pattern.size())
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};
