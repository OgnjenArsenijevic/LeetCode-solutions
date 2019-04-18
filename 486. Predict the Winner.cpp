///486. Predict the Winner
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool PredictTheWinner(vector<int>& v) 
    {
        if(v.size()==0) return true;
        vector<int> prefSum;
        int dp[v.size()+1][v.size()+1];
        memset(dp,0,sizeof(dp));
        prefSum.push_back(v[0]);
        for(int i=1;i<v.size();i++)
            prefSum.push_back(prefSum[i-1]+v[i]);
        for(int i=0;i<v.size();i++)
            dp[i][i]=v[i];
        for(int len=1;len<v.size();len++)
        {
            for(int i=0;i<v.size()-len;i++)
            {
                int j=i+len;
                dp[i][j]=max(v[i]+prefSum[j]-prefSum[i]-dp[i+1][j], v[j]+prefSum[j-1]-(i>0 ? prefSum[i-1] : 0)-dp[i][j-1]);
            }
        }
        return (dp[0][v.size()-1]>=(prefSum[v.size()-1]-dp[0][v.size()-1]) ? true : false);
    }
};
