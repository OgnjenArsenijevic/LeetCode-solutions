///1093. Statistics from a Large Sample
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<double> sampleStats(vector<int>& count) 
    {
        vector<double> ans;
        for(int i=0;i<count.size();i++)
        {
            if(count[i]>0)
            {
                ans.push_back((double)i);
                break;
            }
        }
        for(int i=count.size()-1;i>=0;i--)
        {
            if(count[i]>0)
            {
                ans.push_back((double)i);
                break;
            }
        }
        long long sum=0,num=0;
        for(int i=0;i<count.size();i++)
        {
            sum+=(count[i]*i);
            num+=count[i];
        }
        ans.push_back((double)sum/num);
        long long curr=0,med=0;
        if(num & 1)
        {
            for(int i=0;i<count.size();i++)
            {
                curr+=count[i];
                if(curr>=num/2)
                {
                    ans.push_back((double)i);
                    break;
                }
            }
        }
        else
        {
            for(int i=0;i<count.size();i++)
            {
                curr+=count[i];
                if(curr==num/2)
                    med+=i;
                else
                {
                    if(curr>num/2)
                    {
                        if(med==0)
                            ans.push_back((double)i);
                        else
                            ans.push_back((med+i)/2.0);
                        break;
                    }
                }
            }
        }
        int mode=0;
        for(int i=1;i<count.size();i++)
        {
            if(count[i]>count[mode])
                mode=i;
        }
        ans.push_back((double)mode);
        return ans;
    }
};
