///989. Add to Array-Form of Integer
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int size(int num)
    {
        int cpy=num,ans=0;
        while(cpy>0)
        {
            ans++;
            cpy/=10;
        }
        return ans;
    }
    vector<int> addToArrayForm(vector<int>& v, int k) 
    {
        int sz=size(k);
        int num=sz-v.size();
        bool check=false;
        vector<int> vvv;
        while(num>0 && num--)
        {
            check=true;
            vvv.push_back(0);
        }
        if(check)
        {
            for(int i=0;i<v.size();i++)
                vvv.push_back(v[i]);
            v.clear();
            for(int i=0;i<vvv.size();i++)
                v.push_back(vvv[i]);
        }
        int carry=0;
        int curr=v.size()-1;
        while(curr>=0 && k>0)
        {
            int num=v[curr]+carry+k%10;
            k/=10;
            v[curr]=num%10;
            carry=num/10;
            curr--;
        }
        while(curr>=0 && carry>0)
        {
            int num=v[curr]+carry;
            v[curr]=num%10;
            carry=num/10;
            curr--;
        }
        if(carry==0) return v;
        else
        {
            vector<int> vv;
            vv.push_back(carry);
            for(int i=0;i<v.size();i++)
                vv.push_back(v[i]);
            return vv;
        }
    }
};
