///733. Flood Fill
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool vis[55][55];
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        int korI[4]={1,0,-1,0};
        int korJ[4]={0,1,0,-1};
        queue<pair<int,int> > q;
        int start=image[sr][sc];
        image[sr][sc]=newColor;
        q.push(make_pair(sr,sc));
        vis[sr][sc]=true;
        while(!q.empty())
        {
            pair<int,int> p=q.front();
            q.pop();
            for(int rr=0;rr<4;rr++)
            {
                int ii=p.first+korI[rr];
                int jj=p.second+korJ[rr];
                if(ii>=0 && ii<image.size() && jj>=0 && jj<image[0].size() && !vis[ii][jj] && image[ii][jj]==start)
                {
                    vis[ii][jj]=true;
                    image[ii][jj]=newColor;
                    q.push(make_pair(ii,jj));
                }
            }
        }
        return image;
    }
};
