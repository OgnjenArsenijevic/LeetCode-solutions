///414. Third Maximum Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int thirdMax(vector<int>& v)
    {
        int maxi1=INT_MIN,maxi2=INT_MIN,maxi3=INT_MIN;
        int mini=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==INT_MIN) mini++;
            if(v[i]>=maxi1)
            {
                if(v[i]!=maxi1)
                {
                    maxi3=maxi2;
                    maxi2=maxi1;   
                    maxi1=v[i];
                }
            }    
            else
            {
                if(v[i]>=maxi2)
                {
                    if(v[i]!=maxi2)
                    {
                        maxi3=maxi2;
                        maxi2=v[i];   
                    }
                }    
                else
                {
                    if(v[i]>=maxi3)
                        maxi3=v[i];
                }
            }
        }
        if(maxi3==INT_MIN && (mini==0 || maxi2==INT_MIN)) return maxi1;
        return maxi3;
    }
};
