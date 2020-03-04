///44. Wildcard Matching
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isMatch(string s, string p) 
    {
        int idxS=0,idxP=0,startS=-1,startP=-1;
        while(idxS<s.size())
        {
            if(idxP<p.size() && (s[idxS]==p[idxP] || p[idxP]=='?'))
            {
                idxS++;
                idxP++;
            }
            else if(idxP<p.size() && p[idxP]=='*')
            {
                startS=idxS;
                startP=idxP;
                idxP++;
            }
            else if(startP==-1) return false;
            else
            {
                idxP=startP+1;
                idxS=startS+1;
                startS=idxS;
            }
        }
        for(int i=idxP;i<p.size();i++)
            if(p[i]!='*') return false;
        return true;
    }
};
