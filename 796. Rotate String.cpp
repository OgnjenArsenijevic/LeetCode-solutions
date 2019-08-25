///796. Rotate String
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool rotateString(string a, string b) 
    {
        if(a.size()!=b.size()) return false;
        if(a.size()==0 && b.size()==0) return true;
        a+=a;
        for(int i=0;i<b.size();i++)
        {
            string s="";
            for(int j=i;j<i+b.size();j++)
                s+=a[j];
            if(s==b) return true;
        }
        return false;
    }
};
