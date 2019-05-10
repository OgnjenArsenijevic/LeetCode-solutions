///65. Valid Number
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public boolean isNumber(String s) 
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)>='a' && s.charAt(i)<='z' && s.charAt(i)!='e' || (s.charAt(i)>='A' && s.charAt(i)<='Z'))
                return false;
        }
        try
        {
            Double.parseDouble(s);
        }
        catch(NumberFormatException e)
        {
            return false;
        }
        return true;
    }
}
