///760. Find Anagram Mappings
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B)
    {
        vector<int> ans;
        for(int i=0;i<A.size();i++)
        {
            for(int j=0;j<B.size();j++)
            {
                if(A[i]==B[j])
                {
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};
