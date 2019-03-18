///378. Kth Smallest Element in a Sorted Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool can(vector<vector<int>>& matrix, int k, int val) 
    {
        int cnt=0,i=0,j=matrix.size()-1;
        while (i<matrix.size()) 
        {
            while (j>=0 && matrix[i][j]>val) 
                j--;
            cnt+=j+1;
            i++;
        } 
        return cnt>=k;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        int low=matrix[0][0];
        int high=matrix[matrix.size()-1][matrix.size()-1];
        while (low < high) 
        {
            int mid=low+(high-low)/2;
            if (can(matrix, k, mid)) 
                high = mid;
            else 
                low = mid + 1;
        }
        return low;
    }
};
