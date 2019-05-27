///1054. Distant Barcodes
///Author: Ognjen Arsenijevic
///username: ognjen 1998
class Solution 
{
public:
    vector<int> rearrangeBarcodes(vector<int>& packages) 
    {
        priority_queue<pair<int,int>, vector<pair<int,int> > > pq;
        int arr[10005];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<packages.size();i++)
            arr[packages[i]]++;
        for(int i=1;i<10001;i++)
        {
            if(arr[i]>0)
                pq.push(make_pair(arr[i],i));
        }
        vector<int> ans;
        while(!pq.empty())
        {
            int cnt=pq.top().first, val=pq.top().second;
            pq.pop();
            ans.push_back(val);
            cnt--;
            if(cnt>0)
            {
                int cnt1=pq.top().first,val1=pq.top().second;
                pq.pop();
                ans.push_back(val1);
                cnt1--;
                pq.push(make_pair(cnt,val));
                if(cnt1)
                    pq.push(make_pair(cnt1,val1));
            }
        }
        return ans;
    }
};
