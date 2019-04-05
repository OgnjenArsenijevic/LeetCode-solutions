///1013. Partition Array Into Three Parts With Equal Sum
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool canThreePartsEqualSum(vector<int>& v) 
    {
        int sum=0;
        for(int i=0;i<v.size();i++)
            sum+=v[i];
        if(sum%3!=0)
            return false;
        int search=sum/3;
        int curr=0,cnt=0;
        for(int i=0;i<v.size();i++)
        {
            curr+=v[i];
            if(curr==search)
            {
                curr=0;
                cnt++;
            }
        }
        if(cnt==3)
            return true;
        return false;
    }
};
