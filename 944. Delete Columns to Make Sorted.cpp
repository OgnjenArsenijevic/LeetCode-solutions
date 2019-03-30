///944. Delete Columns to Make Sorted
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minDeletionSize(vector<string>& v) 
    {
        if(v.size()==0) return 0;
        int ans=0;
        for(int i=0;i<v[0].size();i++)
        {
            for(int j=1;j<v.size();j++)
            {
                if(v[j][i]<v[j-1][i])
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
