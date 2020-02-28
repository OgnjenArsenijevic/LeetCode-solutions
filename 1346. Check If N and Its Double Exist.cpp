///1346. Check If N and Its Double Exist
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    bool checkIfExist(vector<int>& arr)
    {
        unordered_map<int,bool> ump;
        for(int i=0;i<arr.size();i++)
        {
            if((ump[arr[i]/2] && arr[i]%2==0) || ump[arr[i]*2])
                return true;
            ump[arr[i]]=true;
        }
        return false;
    }
};
