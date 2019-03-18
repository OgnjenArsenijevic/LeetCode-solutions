///1007. Minimum Domino Rotations For Equal Row
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int minDominoRotations(vector<int>& a, vector<int>& b) 
    {
        int mini=INT_MAX;
        for(int num=1;num<=6;num++)
        {
            int rotA=0,rotB=0;
            bool canA=true,canB=true;
            for(int i=0;i<a.size();i++)
            {
                if(a[i]!=num)
                {
                    if(b[i]==num)
                        rotA++;
                    else
                    {
                        canA=false;
                        break;
                    }
                }
            }
            for(int i=0;i<a.size();i++)
            {
                if(b[i]!=num)
                {
                    if(a[i]==num)
                        rotB++;
                    else
                    {
                        canB=false;
                        break;
                    }
                }
            }
            if(canA && rotA<mini)
                mini=rotA;
            if(canB && rotB<mini)
                mini=rotB;
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};
