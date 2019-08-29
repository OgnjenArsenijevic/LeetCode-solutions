///594. Longest Harmonious Subsequence
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public int findLHS(int[] v) 
    {
        int ans=0;
        HashMap<Integer,Integer> mp=new HashMap<>();
        for(int i=0;i<v.length;i++)
        {
            if(mp.containsKey(v[i]))
                mp.put(v[i],mp.get(v[i])+1);
            else
                mp.put(v[i],1);
        }
        for(int key : mp.keySet())
        {
            if(mp.containsKey(key+1))
                ans=Math.max(ans,mp.get(key)+mp.get(key+1));
        }
        return ans;
    }
}
