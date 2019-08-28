///599. Minimum Index Sum of Two Lists
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) 
    {
        map<int, vector<string>> mp;
        for(int i=0;i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                if(list1[i]==list2[j])
                    mp[i+j].push_back(list1[i]);
            }
        }
        if(mp.empty())
        {
            vector<string> v;
            return v;
        }
        map<int, vector<string>>::iterator it=mp.begin();
        return it->second;
    }
};
