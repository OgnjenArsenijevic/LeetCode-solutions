///1. Two Sum
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> twoSum(vector<int>& v, int target) 
    {   
        vector<int> ans;
        if((target & 1) == 0)
        {
            int num=target/2;
            int idx1=-1,idx2=-1;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==num)
                {
                    if(idx1==-1)
                        idx1=i;
                    else
                        idx2=i;
                }
            }
            if(idx1!=-1 && idx2!=-1)
            {
                ans.push_back(idx1);
                ans.push_back(idx2);
                return ans;
            }
        }
        map<int, int> m;
        for(int i=0;i<v.size();i++)
            m[v[i]]=i+1;
        for(map<int, int>::iterator it=m.begin();it!=m.end();it++)
        {
            
            if(m[target-(it->first)]!=0)
            {
                ans.push_back(it->second-1);
                ans.push_back(m[target-(it->first)]-1);
                break;
            }
        }
        return ans;
    }
};
