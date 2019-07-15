///73. Set Matrix Zeroes
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    void setZeroes(vector<vector<int>>& mat) 
    {
        bool flag=false;
        for(int i=0;i<mat.size();i++)
        {
            if(mat[i][0]==0)
                flag=true;
            for(int j=1;j<mat[0].size();j++)
            {
                if(mat[i][j]==0)
                {
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        for(int i=1;i<mat.size();i++)
        {
            for(int j=1;j<mat[0].size();j++)
            {
                if(mat[i][0]==0 || mat[0][j]==0)
                    mat[i][j]=0;
            }
        }
        if(mat[0][0]==0)
        {
            for(int j=0;j<mat[0].size();j++)
                mat[0][j]=0;
        }
        if(flag)
        {
            for(int i=0;i<mat.size();i++)
                mat[i][0]=0;
        }
    }
};
