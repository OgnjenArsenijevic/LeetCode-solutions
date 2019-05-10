///888. Fair Candy Swap
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    unordered_map<int,int> ump;
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B)
    {
        vector<int> ans;
        for(int i=0;i<B.size();i++)
            ump[B[i]]++;
        int sumA=0,sumB=0;
        for(int i=0;i<A.size();i++)
            sumA+=A[i];
        for(int i=0;i<B.size();i++)
            sumB+=B[i];
        for(int i=0;i<A.size();i++)
        {
            if(ump[A[i]+(sumB-sumA)/2]>0)
            {
                ans.push_back(A[i]);
                ans.push_back(A[i]+(sumB-sumA)/2);
                return ans;
            }
        }
        return ans;
    }
};
