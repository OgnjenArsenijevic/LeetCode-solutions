///34. Find First and Last Position of Element in Sorted Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> searchRange(vector<int>& v, int target) 
    {
        int l=0,r=v.size()-1;
        while(l<v.size())
        {
            if(v[l]==target)
                break;
            l++;
        }
        while(r>=0)
        {
            if(v[r]==target)
                break;
            r--;
        }
        vector<int> ans;
        if(l==v.size())
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(l);
            ans.push_back(r);
        }
        return ans;
    }
};
