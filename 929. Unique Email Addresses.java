///929. Unique Email Addresses
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
    public int numUniqueEmails(String[] emails)
    {
        Set<String> st=new HashSet();
        for(String s : emails)
        {
            int idx=s.indexOf('@');
            String l=s.substring(0,idx);
            String r=s.substring(idx);
            if(l.contains("+"))
                l=l.substring(0,s.indexOf('+'));
            l=l.replaceAll("\\.","");
            st.add(l+r);
        }
        return st.size();
    }
}
