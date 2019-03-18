///997. Find the Town Judge
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int mat[1005][1005];   
    int findJudge(int n, vector<vector<int>>& v) 
    {
         for(int i=0;i<v.size();i++)
         {
             int u=v[i][0], uu=v[i][1];
             mat[u][uu]=1;
         }
         for(int i=1;i<=n;i++)
         {
             bool check=true;
             for(int j=1;j<=n;j++)
             {
                 if(mat[i][j]!=0)
                 {
                    check=false;
                    break;
                 }
             }
             if(check)
             {
                 for(int j=1;j<=n;j++)
                 {
                     if(j!=i)
                     {
                         if(mat[j][i]!=1)
                         {
                             check=false;
                             break;
                         }
                     }
                 }
             }
             if(check)
                 return i;
         }
        return -1;
    }
};
