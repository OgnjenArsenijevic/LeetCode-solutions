///151. Reverse Words in a String
///Author: Ognjen Arsenijevic
///username: ognjen1998
public class Solution
{
    public String reverseWords(String s) 
    {
        s=s.trim();
        if(s.length()==0) return s;
        String ss="";
        String[] split=s.split(" ");
        for(int i=split.length-1;i>=0;i--)
        {
           split[i]=split[i].trim();
           if(ss.length()>0 && split[i].length()>0) ss+=" ";
           ss+=split[i];
        }
        return ss;
    }
}
