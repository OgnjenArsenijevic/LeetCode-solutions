///1103. Distribute Candies to People
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> distributeCandies(int candies, int num_people) 
    {
        int arr[1001];
        memset(arr,0,sizeof(arr));
        int curr=1;
        int idx=0;
        while(candies>0)
        {
            arr[idx++]+=min(curr,candies);
            candies-=curr;
            idx%=num_people;
            curr++;
        }
        vector<int> ans;
        for(int i=0;i<num_people;i++)
            ans.push_back(arr[i]);
        return ans;
    }
};
