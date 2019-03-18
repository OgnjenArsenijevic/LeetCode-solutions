///955. Delete Columns to Make Sorted II
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int cmp(string a,string b)
    {
        //cout<<a<<" "<<b<<"\n";
        for(int i=0;i<min(a.size(),b.size());i++)
        {
            //cout<<a[i]<<" "<<b[i]<<"\n";
            if(a[i]>b[i])
            {
                return i;
                //cout<<"qq";
            } 
            if(a[i]<b[i]) return -1;
        }
        return -1;
    }
    
    int minDeletionSize(vector<string>& v) 
    {
        if(v.size()<2) return 0;
        int start=0;
        int ans=0;
        int sz=v[0].size();
        for(int i=0;i<sz;i++)
        {
           // cout<<"5";
            for(int j=1;j<v.size();j++)
            {
                //cout<<"4";
                int br=cmp(v[j-1],v[j]);
               // cout<<br;
                if(br!=-1)
                {
                    //cout<<v[j-1]<<" "<<v[j]<<"\n";
                    for(int k=0;k<v.size();k++)
                        v[k].erase(v[k].begin()+br);
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
