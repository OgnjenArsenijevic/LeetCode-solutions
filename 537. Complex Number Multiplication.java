///537. Complex Number Multiplication
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
    public String complexNumberMultiply(String a, String b) 
    {
        String split[]=a.split("\\+|i");
        String split1[]=b.split("\\+|i");
        int ar=Integer.parseInt(split[0]);
        int ai=Integer.parseInt(split[1]);
        int br=Integer.parseInt(split1[0]);
        int bi=Integer.parseInt(split1[1]);
        return (ar*br-ai*bi)+"+"+(ar*bi+ai*br)+"i";
    }
}
