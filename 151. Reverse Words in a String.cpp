///151. Reverse Words in a String
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string reverseWords3(string& s) 
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ' && (i==0 || s[i-1]==' '))
            {
                int l=i,r=i;
                while(r<s.size() && s[r]!=' ')
                    r++;
                r--;
                i=r;
                while(l<r)
                    swap(s[l++],s[r--]);
            }
        }
        return s;
    }
    string reverseWords(string s) 
    {
        for(int i=0;i<s.size()/2;i++)
            swap(s[i],s[s.size()-1-i]);
        reverseWords3(s);
        int idx=0,curr=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ' || (s[i]==' ' && idx>0 && s[idx-1]!=' '))
                s[idx++]=s[i];
        }
        if(s[idx-1]==' ')
            s[idx-1]='\0';
        else
            s[idx]='\0';
        return s;
    }
};
