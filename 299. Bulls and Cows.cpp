///299. Bulls and Cows
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string getHint(string secret, string guess) 
    {
        string ss="";
        for(int i=0;i<guess.size();i++)
        {
            if(guess[i]==secret[i])
                ss+="A";
            else
                ss+=secret[i];
        }
        for(int i=0;i<guess.size();i++)
        {
            if(ss[i]!='A')
            {
                for(int j=0;j<guess.size();j++)
                {
                    if(ss[j]!='A' && ss[j]!='B' && secret[i]==guess[j])
                    {
                        ss[j]='B';
                        break;
                    }
                }
            }
        }
        int aa=0,bb=0;
        for(int i=0;i<ss.size();i++)
        {
            aa+=(ss[i]=='A' ? 1 : 0);
            bb+=(ss[i]=='B' ? 1 : 0);
        }
        return (to_string(aa)+"A"+to_string(bb)+"B");
    }
};
