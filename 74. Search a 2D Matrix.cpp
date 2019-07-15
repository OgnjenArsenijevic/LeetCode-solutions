///74. Search a 2D Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) 
    {
        if(mat.empty()) return false;
        int l=0,r=mat[0].size()-1;
        while(r>=0 && l<mat.size())
        {
            if(mat[l][r]==target)
                return true;
            if(mat[l][r]<target)
                l++;
            else
                r--;
        }
        return false;
    }
};
