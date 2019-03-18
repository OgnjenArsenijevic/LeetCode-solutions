///972. Equal Rational Numbers
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool isRationalEqual(string S, string T) 
    {
        string ss="";
        string tt="";
        bool work=false;
        string add1="";
        string add2="";
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='(' && S[i]!=')')
                ss+=S[i];
            if(S[i]=='(')
                work=true;
            if(S[i]==')')
                work=false;
            if(work && S[i]!='(')
                add1+=S[i];
        }
        work=false;
        for(int i=0;i<T.size();i++)
        {
            if(T[i]!='(' && T[i]!=')')
                tt+=T[i];
            if(T[i]=='(')
                work=true;
            if(T[i]==')')
                work=false;
            if(work && T[i]!='(')
                add2+=T[i];
        }
        int cnt=20;
        while(cnt--)
        {
            ss+=add1;
            tt+=add2;
        }
        double a=stod(ss);
        double b=stod(tt);
        return (a-b<0.00000001 && b-a<0.00000001);
    }
};
