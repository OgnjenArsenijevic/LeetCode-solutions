///949. Largest Time for Given Digits
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    string largestTimeFromDigits(vector<int>& v)
    {
        int arr[10];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<4;i++)
            arr[v[i]]++;
        for(int i=23;i>=0;i--)
        {
            for(int j=59;j>=0;j--)
            {
                int curr[10];
                memset(curr,0,sizeof(curr));
                curr[i%10]++;
                curr[i/10]++;
                curr[j%10]++;
                curr[j/10]++;
                bool check=true;
                for(int k=0;k<10;k++)
                {
                    if(arr[k]!=curr[k])
                    {
                        check=false;
                        break;
                    }
                }
                if(check)
                {
                    string s="";
                    s+=to_string(i/10);
                    s+=to_string(i%10);
                    s+=":";
                    s+=to_string(j/10);
                    s+=to_string(j%10);
                    return s;
                }
            }
        }
        return "";
    }
};
