///946. Validate Stack Sequences
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution
{
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        if(popped.size()==0) return true;
        if(pushed.size()==0) return false;
        if(pushed.size()!=popped.size()) return false;
        stack<int> s;
        int cnt=0;
        for(int i=0;i<popped.size();i++)
        {
            bool check=false;
            if(!s.empty())
            {
                if(s.top()==popped[i])
                {
                    s.pop();
                    check=true;
                }
            }
            if(!check)
            {
                while(cnt<pushed.size())
                {
                    if(pushed[cnt]==popped[i])
                    {
                        cnt++;
                        break;
                    }
                    s.push(pushed[cnt++]);
                }
            }
        }
        if(s.empty()) return true;
        return false;
    }
};
