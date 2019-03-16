///167. Two Sum II - Input array is sorted
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<int> twoSum(vector<int>& v, int target) 
    {
        int left=0,right=v.size()-1;
        vector<int> ans;
        while(left<right)
        {
            if(v[left]+v[right]==target)
            {
                ans.push_back(left+1);
                ans.push_back(right+1);
                break;
            }
            if(v[left]+v[right]<target)
                left++;
             if(v[left]+v[right]>target)
                 right--;
        }
        return ans;
    }
};
