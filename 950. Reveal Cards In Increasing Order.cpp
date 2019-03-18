///950. Reveal Cards In Increasing Order
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> deckRevealedIncreasing(vector<int>& v) 
    {
        if(v.size()==0) return v;
        vector<int> ans;
        sort(v.begin(),v.end());
        queue<int> q;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(q.size()==0 && q.size()==1)
                q.push(v[i]);
            else
            {
                int num=q.front();
                q.pop();
                q.push(num);
                q.push(v[i]);
            }
        }
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
