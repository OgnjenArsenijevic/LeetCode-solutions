///223. Rectangle Area
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
    {
        if(A>=G || C<=E || D<=F || B>=H)
            return abs((G-E)*(H-F))+abs((C-A)*(D-B));
        return abs((G-E)*(H-F))-abs((min(G,C)-max(A,E))*(min(H,D)-max(B,F)))+abs((C-A)*(D-B));    
    }
};
