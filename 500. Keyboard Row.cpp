///500. Keyboard Row
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<string> findWords(vector<string>& words) 
    {
        vector<string> ans;
        string r1="qwertyuiopQWERTYUIOP";
        string r2="asdfghjklASDFGHJKL";
        string r3="zxcvbnmZXCVBNM";
        for(int i=0;i<words.size();i++)
        {
            int curr=-1;
            bool flag=true;
            for(int j=0;j<words[i].size();j++)
            {
                for(int k=0;k<r1.size();k++)
                {
                    if(words[i][j]==r1[k])
                    {
                        if(curr!=-1 && curr!=1)
                            flag=false;
                        curr=1;
                    }
                }
                if(!flag) break;
                for(int k=0;k<r2.size();k++)
                {
                    if(words[i][j]==r2[k])
                    {
                        if(curr!=-1 && curr!=2)
                            flag=false;
                        curr=2;
                    }
                }
                if(!flag) break;
                for(int k=0;k<r3.size();k++)
                {
                    if(words[i][j]==r3[k])
                    {
                        if(curr!=-1 && curr!=3)
                            flag=false;
                        curr=3;
                    }
                }
                if(!flag) break;
            }
            if(flag)
                ans.push_back(words[i]);
        }
        return ans;
    }
};
