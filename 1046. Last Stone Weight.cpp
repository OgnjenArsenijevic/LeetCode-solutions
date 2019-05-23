///1046. Last Stone Weight
///Author: Ognjen Arsenijevic
///username: ognjen 1998
class Solution
{
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        while(stones.size()>1)
        {
            sort(stones.begin(),stones.end());
            int a=stones[stones.size()-1], b=stones[stones.size()-2];
            stones.erase(stones.begin()+stones.size()-1);
            stones.erase(stones.begin()+stones.size()-1);
            if(a!=b)
                stones.push_back(max(a,b)-min(a,b));
        }
        if(stones.size()==0)
            return 0;
        return stones[0];
    }
};
