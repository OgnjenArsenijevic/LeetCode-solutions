///66. Plus One
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> plusOne(vector<int>& v) 
    {
        int carry=1;
        for(int i=v.size()-1;i>=0;i--)
        {
            int sum=v[i]+carry;
            if(sum==10)
            {
                carry=1;
                v[i]=0;
            }
            else
            {
                v[i]=sum;
                carry=0;
            }    
            if(carry==0) break;
        }
        if(carry)
            v.insert(v.begin(),1);
        return v;
    }
};
