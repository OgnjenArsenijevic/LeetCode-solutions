///401. Binary Watch
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int arr[10];
    vector<string> ans;
    void solve(int num, int start)
    {
        int h=arr[0]*8+arr[1]*4+arr[2]*2+arr[3];
        int m=arr[4]*32+arr[5]*16+arr[6]*8+arr[7]*4+arr[8]*2+arr[9];
        if(h>11 || m>59) return;
        if(num==0)
        {
            string s=to_string(h)+":"+(m<10 ? "0"+to_string(m) : to_string(m));
            ans.push_back(s);
            return;
        }
        if(start>9) return;
        for(int i=start;i<10;i++)
        {
            arr[i]=1;
            solve(num-1,start+1);
            start++;
            arr[i]=0;
        }
    }
    vector<string> readBinaryWatch(int num)
    {
        solve(num,0);
        return ans;
    }
};
