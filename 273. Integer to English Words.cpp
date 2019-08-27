///273. Integer to English Words
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string s019[20]={"Zero", "One", "Two", "Three", "Four", "Five",
                    "Six", "Seven", "Eight", "Nine", "Ten", "Eleven",
                    "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                    "Seventeen", "Eighteen", "Nineteen"};
    string tens[10]={"", "", "Twenty", "Thirty", "Forty", 
                    "Fifty", "Sixty", "Seventy", "Eighty",
                    "Ninety"};
    string solveSmall(int n)
    {
        if(n<20) return s019[n];
        string ans=tens[n/10];
        n%=10;
        if(n>0) ans+=" "+s019[n];
        return ans;
    }
    string numberToWords(int n) 
    {
        if(n<100) return solveSmall(n);
        string ans="";
        int billion=1000000000,million=1000000,thousand=1000,hundred=100;
        if(n>=billion) ans+=numberToWords(n/billion)+" Billion ";
        n%=billion;
        if(n>=million) ans+=numberToWords(n/million)+" Million ";
        n%=million;
        if(n>=thousand) ans+=numberToWords(n/thousand)+" Thousand ";
        n%=thousand;
        if(n>=hundred) ans+=numberToWords(n/hundred)+" Hundred ";
        n%=hundred;
        if(n>0) ans+=solveSmall(n);
        int st=0, en=ans.size()-1;
        while(ans[st]==' ') st++;
        while(ans[en]==' ') en--;
        string trimAns="";
        for(int i=st;i<=en;i++)
            trimAns+=ans[i];
        return trimAns;
    }
};
