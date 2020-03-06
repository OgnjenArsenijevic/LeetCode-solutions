///243. Shortest Word Distance
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int shortestDistance(vector<string>& words, string word1, string word2)
    {
        int idx1=-1, idx2=-1, ans=words.size();
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==word1)
                idx1=i;
            else if(words[i]==word2)
                idx2=i;
            if(idx1!=-1 && idx2!=-1)
                ans=min(ans,abs(idx2-idx1));
        }
        return ans;
    }
};
