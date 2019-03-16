///28. Implement strStr()
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        if(needle.size()==0) return 0;
        if(needle.size()>haystack.size()) return -1;
        int index=-1;
        for(int i=0;i<haystack.size()+1-needle.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                bool check=true;
                int j=i+1;
                for(int rr=1;rr<needle.size();rr++)
                {
                    if(haystack[j++]!=needle[rr])
                    {
                        check=false;
                        break;
                    }
                }
                if(check)
                {
                    index=i;
                    break;
                }
            }
        }
        return index;
    }
};
