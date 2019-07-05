///415. Add Strings
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string addStrings(string num1, string num2) 
    {
        vector<int> v;
        int i=0,j=0,carry=0;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        while(i<num1.size() && j<num2.size())
        {
            int n1=num1[i]-'0';
            int n2=num2[j]-'0';
            v.push_back((n1+n2+carry)%10);
            carry=(n1+n2+carry)/10;
            i++;
            j++;
        }
        while(i<num1.size())
        {
            int n1=num1[i]-'0';
            v.push_back((n1+carry)%10);
            carry=(n1+carry)/10;
            i++;
        }
        while(j<num2.size())
        {
            int n2=num2[j]-'0';
            v.push_back((n2+carry)%10);
            carry=(n2+carry)/10;
            j++;
        }
        if(carry>0)
            v.push_back(carry);
        string ans="";
        for(int i=v.size()-1;i>=0;i--)
            ans+=(v[i]+'0');
        return ans;
    }
};
