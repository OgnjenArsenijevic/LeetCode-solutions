///1041. Robot Bounded In Circle
///Author: Ognjen Arsenijevic
///username: ognjen 1998
class Solution 
{
public:
    bool isRobotBounded(string ss) 
    {
        int orr=1,x=0,y=0;
        string s="";
        for(int i=0;i<1000;i++)
            s+=ss;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='G')
            {
                if(orr==1)
                    y++;
                if(orr==2)
                    x++;
                if(orr==3)
                    y--;
                if(orr==4)
                    x--;
            }
            if(s[i]=='L')
                orr--;
            if(s[i]=='R')
                orr++;
            if(orr==5) orr=1;
            if(orr==0) orr=4;
        }
        //cout<<x<<" "<<y;
        if(x>105 || x<-105 || y>105 || y<-105) return false;
        return true;
    }
};
