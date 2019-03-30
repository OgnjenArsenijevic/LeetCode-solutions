///860. Lemonade Change
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool lemonadeChange(vector<int>& v) 
    {
        int arr[2];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==5)
                arr[0]++;
            if(v[i]==10)
                arr[1]++;
            int change=v[i]-5;
            if(change==15)
            {
                if(arr[1]>0 && arr[0]>0)
                {
                    arr[1]--;
                    arr[0]--;
                }
                else
                {
                    if(arr[0]>2)
                        arr[0]-=3;
                    else
                        return false;
                }
            }
            if(change==10)
            {
                if(arr[1]>0)
                    arr[1]--;
                else
                {
                    if(arr[0]>1)
                        arr[0]-=2;
                    else
                        return false;
                }
            }
            if(change==5)
            {
                if(arr[0]>0)
                    arr[0]--;
                else
                    return false;
            }
        }
        return true;
    }
};
