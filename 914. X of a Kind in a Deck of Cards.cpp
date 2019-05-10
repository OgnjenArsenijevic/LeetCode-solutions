///914. X of a Kind in a Deck of Cards
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool can(int n)
    {
        for(unordered_map<int,int>::iterator it=ump.begin();it!=ump.end();it++)
        {
            if(it->second%n!=0)
                return false;
        }
        return true;
    }
    unordered_map<int,int> ump;
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        for(int i=0;i<deck.size();i++)
            ump[deck[i]]++;
        for(int i=2;i<10001;i++)
        {
            if(can(i))
                return true;
        }
        return false;
    }
};
