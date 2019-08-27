///434. Number of Segments in a String
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
    public int countSegments(String s) 
    {
        String[] split=s.split(" ");
        int ans=0;
        for(int i=0;i<split.length;i++)
        {
            split[i]=split[i].trim();
            if(split[i].length()>0)
                ans++;
        }
        return ans;
    }
}
