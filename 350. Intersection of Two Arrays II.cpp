///350. Intersection of Two Arrays II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        map<int,int> m1;
        map<int,int> m2;
        for(int i=0;i<nums1.size();i++)
            m1[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
            m2[nums2[i]]++;
        vector<int> ans;
        for(map<int,int>::iterator it=m1.begin();it!=m1.end();it++)
        {
            int cnt=min(it->second,m2[it->first]);
            while(cnt>0)
            {
                cnt--;
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};
