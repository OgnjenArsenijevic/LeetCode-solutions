///812. Largest Triangle Area
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    double largestTriangleArea(vector<vector<int>>& points) 
    {
        double ans=0;
        for(int i=0;i<points.size();i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                for(int k=j+1;k<points.size();k++)
                {
                    double a=sqrt((double)(points[i][0]-points[j][0])*(points[i][0]-points[j][0])+(points[i][1]-points[j][1])*(points[i][1]-points[j][1]));
                    double b=sqrt((double)(points[k][0]-points[j][0])*(points[k][0]-points[j][0])+(points[k][1]-points[j][1])*(points[k][1]-points[j][1]));
                    double c=sqrt((double)(points[i][0]-points[k][0])*(points[i][0]-points[k][0])+(points[i][1]-points[k][1])*(points[i][1]-points[k][1]));
                    double s=(a+b+c)/2.0;
                    double currP=sqrt(s*(s-a)*(s-b)*(s-c));
                    ans=max(ans,currP);
                }
            }
        }
        return ans;
    }
};
