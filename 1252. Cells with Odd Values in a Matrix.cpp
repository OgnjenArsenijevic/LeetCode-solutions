///1252. Cells with Odd Values in a Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) 
    {
        int mat[n][m];
        memset(mat,0,sizeof(mat));
        for(int i=0;i<indices.size();i++)
        {
            for(int j=0;j<m;j++)
                mat[indices[i][0]][j]++;
            for(int j=0;j<n;j++)
                mat[j][indices[i][1]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                ans+=(mat[i][j]&1 ? 1 : 0);
        return ans;
    }
};
