///1108. Defanging an IP Address
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string defangIPaddr(string address) 
    {
        string ans="";
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.')
                ans+="[.]";
            else
                ans+=address[i];
        }
        return ans;
    }
};
