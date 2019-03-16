///88. Merge Sorted Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        queue<int> q1;
        queue<int> q2;
        for(int i=0;i<m;i++)
            q1.push(nums1[i]);
        for(int i=0;i<n;i++)
            q2.push(nums2[i]);
        int i=0;
        while(!q1.empty() && !q2.empty())
        {
            if(q1.front()<q2.front())
            {
                nums1[i++]=q1.front();
                q1.pop();
            }
            else
            {
                nums1[i++]=q2.front();
                q2.pop();
            }
        }
        while(!q1.empty())
        {
            nums1[i++]=q1.front();
            q1.pop();
        }
        while(!q2.empty())
        {
            nums1[i++]=q2.front();
            q2.pop();
        }
    }
};
