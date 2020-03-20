///1165. Single-Row Keyboard
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int calculateTime(string keyboard, string word) 
    {
        unordered_map<char,int> ump;
        for(int i=0;i<keyboard.size();i++)
            ump[keyboard[i]]=i;
        int curr=0,ans=0;
        for(int i=0;i<word.size();i++)
        {
            ans+=abs(curr-ump[word[i]]);
            curr=ump[word[i]];
        }
        return ans;
    }
};
