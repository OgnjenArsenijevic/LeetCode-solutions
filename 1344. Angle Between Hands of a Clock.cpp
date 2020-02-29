///1344. Angle Between Hands of a Clock
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    double angleClock(int hour, int minutes)
    {
        double m=minutes;
        double h=hour%12*5+m/12;
        double d=min(abs(h-m),60-abs(h-m));
        return d/60*360;
    }
};
