///975. Odd Even Jump
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    int ans;
    bool even[20005],odd[20005];
    map<int, int> m;
    int oddEvenJumps(vector<int>& v) 
    {   
        for(int i=0;i<v.size();i++)
        {
            even[i]=false;
            odd[i]=false;
        }
        even[v.size()-1]=true;
        odd[v.size()-1]=true;
        m[v[v.size()-1]]=v.size()-1;
        for(int i=v.size()-2;i>=0;i--)
        {
            if(m.find(v[i])!=m.end())
            {
                even[i]=odd[m[v[i]]];
                odd[i]=even[m[v[i]]];
            }
            else
            {
                map<int, int>::iterator itlow=m.lower_bound(v[i]);
                map<int, int>::iterator ithigh=m.upper_bound(v[i]);
                if(itlow!=m.begin())
                {
                    itlow--;
                    even[i]=odd[itlow->second];
                }    
                if(ithigh!=m.end())
                    odd[i]=even[ithigh->second];
                    
            }
            m[v[i]]=i;
        }
        for(int i=0;i<v.size();i++)
            ans+=(odd[i]==true);
        return ans;
    }
};
