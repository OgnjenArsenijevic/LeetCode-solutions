///575. Distribute Candies
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int distributeCandies(vector<int>& v) 
    {
        unordered_set<int> st;
        for(int i=0;i<v.size();i++)
            st.insert(v[i]);
        return min(st.size(),v.size()/2);
    }
};
