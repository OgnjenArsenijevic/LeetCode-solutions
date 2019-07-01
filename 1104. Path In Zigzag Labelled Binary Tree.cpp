///1104. Path In Zigzag Labelled Binary Tree
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> pathInZigZagTree(int label) 
    {
        vector<int> v;
        int flag=1;
        int curr=1;
        int sum=1;
        int deg=1;
        while(curr<1000001)
        {
            if(flag==1)
            {
                for(int i=curr;i<=sum;i++)
                    v.push_back(i);
            }
            else
            {
                for(int i=sum;i>=curr;i--)
                    v.push_back(i);
            }
            curr=sum+1;
            flag*=(-1);
            deg*=2;
            sum+=deg;
        }
        vector<int> ans;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==label)
            {
                ans.push_back(label);
                int idx=i;
                while(idx!=0)
                {
                    ans.push_back(v[(idx-1)/2]);
                    idx=(idx-1)/2;
                }
                break;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
