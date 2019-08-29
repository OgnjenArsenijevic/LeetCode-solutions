///686. Repeated String Match
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public int repeatedStringMatch(String a, String b)
    {
        int ans=1;
        String s=a;
        while(s.length()<b.length())
        {
            s+=a;
            ans++;
        }
        if(s.contains(b)) 
            return ans;
        s+=a;
        ans++;
        if(s.contains(b)) 
            return ans;
        return -1;
    }
}
