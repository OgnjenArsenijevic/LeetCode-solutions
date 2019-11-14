  
///1232. Check If It Is a Straight Line
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool checkStraightLine(vector<vector<int>>& coordinates)
    {
        double x1=coordinates[0][0],y1=coordinates[0][1],x2=coordinates[1][0],y2=coordinates[1][1];
        double k=(y2-y1)/(x2-x1); 
        for(int i=2;i<coordinates.size();i++)
        {
            double kk=(coordinates[i][1]-y2)/(coordinates[i][0]-x2);
            if(kk!=k)
                return false;
            x2=coordinates[i][0];y2=coordinates[i][1];
        }
        return true;
    }
};
