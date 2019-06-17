///1089. Duplicate Zeros
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    void duplicateZeros(vector<int>& arr)
    {
        int n=arr.size();
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                for(int j=arr.size()-1;j>i;j--)
                    arr[j]=arr[j-1];
                if(i<arr.size()-1)
                    arr[++i]=0;
            }
        }
    }
};
