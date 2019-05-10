///1037. Valid Boomerang
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isBoomerang(vector<vector<int>>& points) 
    {
        long double coef1,coef2;
        if(points[0][0]==points[1][0] && points[0][1]==points[1][1])
            return false;
        if(points[1][0]==points[2][0] && points[1][1]==points[2][1])
            return false;
        if(points[0][0]==points[2][0] && points[0][1]==points[2][1])
            return false;
        if(points[1][0]-points[0][0]==0)
            coef1=(long double)INT_MAX;
        else
            coef1=(long double)(points[1][1]-points[0][1])/(points[1][0]-points[0][0]);
        if(points[2][0]-points[1][0]==0)
            coef2=(long double)INT_MAX;
        else
            coef2=(long double)(points[2][1]-points[1][1])/(points[2][0]-points[1][0]);
        return coef1!=coef2;
    }
};
