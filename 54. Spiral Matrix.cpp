///54. Spiral Matrix
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        if(matrix.empty()) return ans;
        int total=matrix.size()*matrix[0].size();
        int offset=0;
        while(true)
        {
            int sz=ans.size();
            for(int i=0+offset;i<matrix[0].size()-offset;i++)
            {
                ans.push_back(matrix[offset][i]);
                if(ans.size()==total)
                    return ans;
            }    
            for(int i=1+offset;i<matrix.size()-offset;i++)
            {
                ans.push_back(matrix[i][matrix[0].size()-1-offset]);
                if(ans.size()==total)
                    return ans;
            }    
            for(int i=matrix[0].size()-2-offset;i>=offset;i--)
            {
                ans.push_back(matrix[matrix.size()-1-offset][i]);
                if(ans.size()==total)
                    return ans;
            }
            for(int i=matrix.size()-2-offset;i>offset;i--)
            {
                ans.push_back(matrix[i][offset]);
                if(ans.size()==total)
                    return ans;
            }
            offset++;
        }
        return ans;
    }
};
