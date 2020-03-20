///1213. Intersection of Three Sorted Array
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) 
    {
        int i1=0,i2=0,i3=0;
        vector<int> ans;
        while(i1<arr1.size() && i2<arr2.size() && i3<arr3.size())
        {
            if(arr1[i1]==arr2[i2] && arr1[i1]==arr3[i3])
            {
                ans.push_back(arr1[i1++]);
                i2++;
                i3++;
            }
            else
            {
                int maxi=max(arr1[i1],max(arr2[i2],arr3[i3]));
                if(arr1[i1]<maxi) i1++;
                if(arr2[i2]<maxi) i2++;
                if(arr3[i3]<maxi) i3++;
            }
        }
        return ans;
    }
};
