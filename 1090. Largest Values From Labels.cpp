///1090. Largest Values From Labels
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int arr[20005];
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int num_wanted, int use_limit) 
    {
        vector<pair<int,int> > v;
        for(int i=0;i<values.size();i++)
            v.push_back(make_pair(values[i],labels[i]));
        int cnt=0,sum=0;
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--)
        {
            if(arr[v[i].second]<use_limit)
            {
                //cout<<arr[v[i].second]<<" "<<v[i].first<<"\n";
                arr[v[i].second]++;
                cnt++;
                sum+=v[i].first;
            }
            if(cnt==num_wanted)
                break;
        }
        return sum;
    }
};
