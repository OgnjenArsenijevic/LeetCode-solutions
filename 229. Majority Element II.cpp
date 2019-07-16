///229. Majority Element II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<int> majorityElement(vector<int>& v)
    {
        int cnt1=0,cnt2=0,cand1=INT_MAX,cand2=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            if(cand1==v[i])
                cnt1++;
            else
            {
                if(cand2==v[i])
                    cnt2++;
                else
                {
                    if(cnt1==0)
                    {
                        cnt1++;
                        cand1=v[i];
                    }
                    else
                    {
                        if(cnt2==0)
                        {
                            cnt2++;
                            cand2=v[i];
                        }
                        else
                        {
                            cnt1--;
                            cnt2--;
                        }
                    }
                }
            }
        }
        vector<int> ans;
        cnt1=0;
        cnt2=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==cand1)
                cnt1++;
            if(v[i]==cand2)
                cnt2++;
        }
        if(cnt1>v.size()/3)
            ans.push_back(cand1);
        if(cnt2>v.size()/3 && cand2!=cand1)
            ans.push_back(cand2);
        return ans;
    }
};
