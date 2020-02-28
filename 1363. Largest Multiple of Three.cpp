///1363. Largest Multiple of Three
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string largestMultipleOfThree(vector<int>& digits) 
    {
        vector<vector<int>> v(3);
        int sum=0;
        sort(digits.begin(), digits.end(), greater<int>());
        for(int i=0;i<digits.size();i++) 
        {
            v[digits[i] % 3].push_back(digits[i]);
            sum = (sum+digits[i]) % 3;
        }
        if(sum)
        {
            if(!v[sum].size()) 
            {
                if(v[3-sum].size() < 2)
                    return "";
                v[3-sum].pop_back();
                v[3-sum].pop_back();
            }
            else 
                v[sum].pop_back();
        }
        string ans;
        for(int i=0;i<3;i++) {
            for(int j=0;j<v[i].size();j++) 
            {
                ans+=(char)(v[i][j]+'0');
            }
        }
        sort(ans.begin(), ans.end(), greater<int>());
        if(ans.size() && ans[0]=='0')
            return "0";
        return ans;
    }
};
