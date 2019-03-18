///984. String Without AAA or BBB
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string strWithout3a3b(int a, int b) 
    {
        int sum=a+b;
        string s="";
        if(a>b)
        {
            while(a>b && a>1 && b>0)
            {
                s+="aab";
                a-=2;
                b--;
            }    
            while(b>0 && a>0)
            {
                s+="ba";
                b--;
                a--;
            }
            if(b>0)
            {
                s+="b";
                b--;
            }    
            if(a>0)
            {
                s+="a";
                a--;
            }
            if(b>0)
            {
                s+="b";
                b--;
            }    
            if(a>0)
            {
                s+="a";
                a--;
            }
        }
        else
        {
            while(b>a && b>1 && a>0)
            {
                s+="bba";
                a--;
                b-=2;
            }    
            while(b>0 && a>0)
            {
                s+="ab";
                b--;
                a--;
            }
            if(a>0)
            {
                s+="a";
                a--;
            }
            if(b>0)
            {
                s+="b";
                b--;
            }
            if(a>0)
            {
                s+="a";
                a--;
            }
            if(b>0)
            {
                s+="b";
                b--;
            }  
        }
        return s;
    }
};
