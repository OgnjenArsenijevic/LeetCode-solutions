///874. Walking Robot Simulation
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    inline size_t key(int i,int j) {return (size_t) i << 32 | (unsigned int) j;}
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) 
    {
        unordered_map<size_t, bool> ump;
        for(int i=0;i<obstacles.size();i++)
            ump[key(obstacles[i][0],obstacles[i][1])]=true;
        int x=0,y=0,ansx=0,ansy=0;
        int dis=0;
        char dir='U';
        for(int i=0;i<commands.size();i++)
        {
            if(commands[i]==-1)
            {
                if(dir=='U')
                    dir='R';
                else
                {
                    if(dir=='L')
                        dir='U';
                    else
                    {
                        if(dir=='D')
                            dir='L';
                        else
                            dir='D';
                    }
                }
            }
            if(commands[i]==-2)
            {
                if(dir=='U')
                    dir='L';
                else
                {
                    if(dir=='L')
                        dir='D';
                    else
                    {
                        if(dir=='D')
                            dir='R';
                        else
                            dir='U';
                    }
                }
            }
            int xx=x,yy=y;
            for(int j=0;j<commands[i];j++)
            {
                if(dir=='U')
                    yy++;
                if(dir=='L')
                    xx--;
                if(dir=='D')
                    yy--;
                if(dir=='R')
                    xx++;
                if(ump[key(xx,yy)]!=true)
                { 
                    x=xx;
                    y=yy;
                    int curr=xx*xx+yy*yy;
                    if(curr>dis)
                        dis=curr;
                }
                else
                    break;
            }
        }
        return dis;
    }
};
