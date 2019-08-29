///859. Buddy Strings
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool buddyStrings(string a, string b) 
    {
        if(a.size()!=b.size())
            return false;
        if(a==b)
        {
            int arr[26];
            memset(arr,0,sizeof(arr));
            for(int i=0;i<a.size();i++)
            {
                arr[a[i]-'a']++;
                if(arr[a[i]-'a']>1)
                    return true;
            }
            return false;
        }
        int idx1=-1,idx2=-1;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=b[i])
            {
                if(idx1==-1)
                    idx1=i;
                else
                {
                    if(idx2==-1)
                        idx2=i;
                    else
                        return false;
                }
            }
        }
        return (idx2!=-1 && a[idx1]==b[idx2] && a[idx2]==b[idx1]);
    }
};
