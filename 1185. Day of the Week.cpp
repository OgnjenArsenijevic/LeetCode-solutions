///1185. Day of the Week
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string dayOfTheWeek(int day, int month, int year) 
    {
        string arr[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
        month=(month+9)%12;
        year-=(month/10);
        int total=(year*365+year/4-year/100+year/400+(5+month*306)/10+day-1)%7;
        return arr[total];
    }
};
