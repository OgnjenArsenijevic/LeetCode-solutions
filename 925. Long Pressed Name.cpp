///925. Long Pressed Name
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isLongPressedName(string name, string typed) 
    {
        int idx=0;
        for(int i=0;i<typed.size() && idx<name.size();i++)
        {
            if(typed[i]==name[idx])
                idx++;
        }
        return idx==name.size();
    }
};
