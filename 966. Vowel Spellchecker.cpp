///966. Vowel Spellchecker
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    vector<string> spellchecker(vector<string>& w, vector<string>& q) 
    {
        vector<string> w1;
        vector<string> q1;
        vector<string> w2;
        vector<string> q2;
        vector<string> ans;
        for(int i=0;i<w.size();i++)
        {
            string s="";
            for(int j=0;j<w[i].size();j++)
                s+=tolower(w[i][j]);
            w1.push_back(s);
        }
        for(int i=0;i<q.size();i++)
        {
            string s="";
            for(int j=0;j<q[i].size();j++)
                s+=tolower(q[i][j]);
            q1.push_back(s);
        }
        for(int i=0;i<w.size();i++)
        {
            string s="";
            for(int j=0;j<w[i].size();j++)
            {
                if(w[i][j]=='a' || w[i][j]=='e' || w[i][j]=='i' || w[i][j]=='o' || w[i][j]=='u' ||
                  w[i][j]=='A' || w[i][j]=='E' || w[i][j]=='I' || w[i][j]=='O' || w[i][j]=='U')
                    s+="-";
                else
                    s+=tolower(w[i][j]);
            }
            w2.push_back(s);
        }
        for(int i=0;i<q.size();i++)
        {
            string s="";
            for(int j=0;j<q[i].size();j++)
            {
                if(q[i][j]=='a' || q[i][j]=='e' || q[i][j]=='i' || q[i][j]=='o' || q[i][j]=='u' ||
                  q[i][j]=='A' || q[i][j]=='E' || q[i][j]=='I' || q[i][j]=='O' || q[i][j]=='U')
                    s+="-";
                else
                    s+=tolower(q[i][j]);
            }
            q2.push_back(s);
        }
        for(int j=0;j<q.size();j++)
        {
            int idx=-1;
            for(int i=0;i<w2.size();i++)
            {
                if(q2[j]==w2[i]) 
                {
                    idx=i;
                    break;
                }
            }
            if(idx==-1)
                ans.push_back("");
            else
            {
                bool check=true;
                for(int i=idx;i<w1.size();i++)
                {
                    if(q1[j]==w1[i]) 
                    {
                        idx=i;
                        check=false;
                        break;
                    }
                }
                if(!check)
                {
                    for(int i=idx;i<w1.size();i++)
                    {
                        if(q[j]==w[i]) 
                        {
                            idx=i;
                            break;
                        }
                    }
                }
                ans.push_back(w[idx]);
            }
        }
        return ans;
    }
};
