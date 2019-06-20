///1078. Occurrences After Bigram
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public String[] findOcurrences(String text, String first, String second) 
    {
        ArrayList<String> arr=new ArrayList<String>();
        String[] split=text.split(" ");
        for(int i=2;i<split.length;i++)
        {
            if(split[i-2].equals(first) && split[i-1].equals(second))
                arr.add(split[i]);
        }
        return arr.toArray(new String[arr.size()]);
    }
}
