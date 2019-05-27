///1053. Previous Permutation With One Swap
///Author: Ognjen Arsenijevic
///username: ognjen 1998
class Solution 
{
public:
    vector<int> prevPermOpt1(vector<int>& v) 
    {
        int dig[10005];
        memset(dig,-1,sizeof(dig));
        dig[v[v.size()-1]]=v.size()-1;
        for(int i=v.size()-2;i>=0;i--)
        {
            if(dig[v[i]]==-1) dig[v[i]]=i;
        }
        for(int i=v.size()-2;i>=0;i--)
        {
            int maxi=-1;
            for(int j=v[i]-1;j>=0;j--)
            {
                if(dig[j]>i)
                    maxi=max(maxi,dig[j]);   
            }
            if(maxi!=-1)
            {
                swap(v[i],v[maxi]);
                break;
            }
        }
        return v;
    }
};
