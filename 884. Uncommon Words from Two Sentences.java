///884. Uncommon Words from Two Sentences
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public String[] uncommonFromSentences(String A, String B) 
    {
        Map<String, Integer> hashMap = new HashMap();
        String split1[]=A.split(" ");
        String split2[]=B.split(" ");
        for(String s : split1)
        {
            if(hashMap.containsKey(s))
                hashMap.put(s,hashMap.get(s)+1);
            else
                hashMap.put(s,1);
        }
        for(String s : split2)
        {
            if(hashMap.containsKey(s))
                hashMap.put(s,hashMap.get(s)+1);
            else
                hashMap.put(s,1);
        }
        ArrayList<String> ans = new ArrayList();
        for(String s : hashMap.keySet())
        {
            if(hashMap.get(s)==1)
                ans.add(s);
        }
        return ans.toArray(new String[ans.size()]);
    }
}
