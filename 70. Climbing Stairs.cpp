///70. Climbing Stairs
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    void matMultiply(long long a[2][2], long long b[2][2])
    {
        long long c[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j];
        }
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                a[i][j]=c[i][j];
        }
        return;
    }

    void matFastPow(long long a[2][2],int n)
    {
        long long res[2][2]={{1,0},{0,1}};
        while(n>0)
        {
            if(n&1)
                matMultiply(res,a);
            matMultiply(a,a);
            n>>=1;
        }
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                a[i][j]=res[i][j];
        }
        return;
    }
    int climbStairs(int n) 
    {
        if(n==1) return 1;
        if(n==2) return 2;
        long long mat[2][2]={{1LL,1LL},{1LL,0LL}};
        long long mulMat[2][2]={{2LL,0LL},{1LL,0LL}};
        matFastPow(mat,n-2);
        matMultiply(mat,mulMat);
        return mat[0][0];
    }
};
