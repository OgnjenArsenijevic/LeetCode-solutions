///520. Detect Capital
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool detectCapitalUse(string word)
    {
        if(word.size()==0) return true;
        int cnt=0;
        for(int i=0;i<word.size();i++)
        {
            if(islower(word[i])==0)
                cnt++;
        }
        if(cnt==0) return true;
        if(cnt==1 && islower(word[0])==0) return true;
        if(cnt==word.size()) return true;
        return false;
    }
};
