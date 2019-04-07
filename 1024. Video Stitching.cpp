///1024. Video Stitching
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int videoStitching(vector<vector<int>>& clips, int t) 
    {
        vector<pair<int,int> > v;
        for(int i=0;i<clips.size();i++)
            v.push_back(make_pair(clips[i][0],clips[i][1]));
        sort(v.begin(),v.end());
        int needed=0,ans=0,curr=0;
        if(v[curr].first>needed)
            return -1;
        while(needed<t)
        {
            int maxi=0;
            bool flag=false;
            if(curr>=v.size()) break;
            while(curr<v.size() && v[curr].first<=needed)
            {
                flag=true;
                maxi=max(maxi,v[curr].second);
                curr++;
            }
            if(flag)
                curr--;
            curr++;
            ans++;
            needed=maxi;
        }
        return (needed>=t ? ans : -1);
        
    }
};
