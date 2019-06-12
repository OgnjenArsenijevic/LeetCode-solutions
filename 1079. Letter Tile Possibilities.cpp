///1079. Letter Tile Possibilities
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    unordered_set<string> ust;
    int used[8];
    void nextPermutation(string curr,int idx, int sz, string tiles)
    {
        if(idx==sz)
        {
            ust.insert(curr);
            return; 
        }
        for(int i=0;i<tiles.size();i++)
        {
            bool flag=true;
            for(int j=0;j<idx;j++)
            {
                if(used[j]==i)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                used[idx]=i;
                nextPermutation(curr+tiles[i],idx+1,sz,tiles);
                used[idx]=-1;
            }
        }
        
    }
    int numTilePossibilities(string tiles) 
    {
        memset(used,-1,sizeof(used));
        for(int i=1;i<=tiles.size();i++)
            nextPermutation("",0,i,tiles);
        return ust.size();
    }
};
