///1170. Compare Strings by Frequency of the Smallest Character
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    vector<int> numSmallerByLeadingCount(vector<string>& queries, vector<string>& words)
    {
        vector<int> ww;
        for(int i=0;i<words.size();i++)
        {
            vector<char> vv;
            for(int j=0;j<words[i].size();j++)
                vv.push_back(words[i][j]);
            sort(vv.begin(),vv.end());
            int curr=1;
           /* for(int j=0;j<vv.size();j++)
                cout<<vv[j];
            cout<<"\n";*/
            for(int j=1;j<vv.size();j++)
            {
                if(vv[j]==vv[0]) 
                    curr++;
                else 
                    break;
            }
            //cout<<curr<<"curr\n";
            ww.push_back(curr);
        }
        vector<int> qq;
        for(int i=0;i<queries.size();i++)
        {
            vector<char> vv;
            for(int j=0;j<queries[i].size();j++)
                vv.push_back(queries[i][j]);
            sort(vv.begin(),vv.end());
            int curr=1;
           /* for(int j=0;j<vv.size();j++)
                cout<<vv[j];
            cout<<"\n";*/
            for(int j=1;j<vv.size();j++)
            {
                if(vv[j]==vv[0]) 
                    curr++;
                else 
                    break;
            }
            qq.push_back(curr);
        }
        vector<int> ans;
        sort(ww.begin(),ww.end());
       /* cout<<"\n\n";
        for(int i=0;i<qq.size();i++)
            cout<<qq[i]<<" ";
        cout<<"\n";
        for(int i=0;i<ww.size();i++)
            cout<<ww[i]<<" ";
        cout<<"\n";*/
        for(int i=0;i<qq.size();i++)
        {
            int cnt=0;
            for(int j=ww.size()-1;j>=0;j--)
            {
               // cout<<ww[j]<<" "<<qq[i]<<" q\n";
                if(ww[j]>qq[i])
                    cnt++;
                else
                    break;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
