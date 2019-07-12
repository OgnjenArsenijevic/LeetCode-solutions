///496. Next Greater Element I
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> nextGreaterElement(vector<int>& v, vector<int>& v1) 
    {
        vector<int> sol;
        for(int i=0;i<v.size();i++)
        {
            int idx=-1;
            for(int j=0;j<v1.size();j++)
            {
                if(v1[j]==v[i])
                {
                    idx=j;
                    break;
                }
            }
            int ans=-1;
            for(int j=idx+1;j<v1.size();j++)
            {
                if(v1[j]>v1[idx])
                {
                    ans=v1[j];
                    break;
                }
            }
            sol.push_back(ans);
        }
        return sol;
    }
};
