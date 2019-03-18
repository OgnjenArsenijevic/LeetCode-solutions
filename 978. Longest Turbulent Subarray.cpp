///978. Longest Turbulent Subarray
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int maxTurbulenceSize(vector<int>& v) 
    {
        int maxi1=0,maxi2=0;
        if(v.size()<2) return v.size();
        int sgn=1;
        int val=1;
        for(int i=1;i<v.size();i++)
        {
            if(sgn==1)
            {
                if(v[i]>v[i-1])
                    val++;
                else
                {
                    if(val>maxi1) maxi1=val;
                    val=1;
                }
                sgn*=-1;
            }
            else
            {
                if(v[i]<v[i-1])
                    val++;
                else
                {
                    if(val>maxi1) maxi1=val;
                    val=1;
                }
                sgn*=-1;
            }
        }
        maxi1=max(maxi1,val);
        val=1;
        sgn=1;
        for(int i=1;i<v.size();i++)
        {
            if(sgn==1)
            {
                if(v[i]<v[i-1])
                    val++;
                else
                {
                    if(val>maxi2) maxi2=val;
                    val=1;
                }
                sgn*=-1;
            }
            else
            {
                if(v[i]>v[i-1])
                    val++;
                else
                {
                    if(val>maxi2) maxi2=val;
                    val=1;
                }
                sgn*=-1;
            }
        }
        maxi2=max(maxi2,val);
        return max(maxi1,maxi2);
    }
};
