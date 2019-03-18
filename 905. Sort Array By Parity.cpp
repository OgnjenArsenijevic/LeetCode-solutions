///905. Sort Array By Parity
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<int> sortArrayByParity(vector<int>& v)
    {
        int left=0,right=v.size()-1;
        while(left<right)
        {
            bool check=true;
            if((v[left] & 1)==0)
            {
                left++;
                check=false;
            }
            if((v[right] & 1)==1)
            {
                right--;
                check=false;
            }
            if(check)
                swap(v[left++],v[right--]);
        }
        return v;
    }
};
