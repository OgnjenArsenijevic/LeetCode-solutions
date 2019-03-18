///804. Unique Morse Code Words
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    int uniqueMorseRepresentations(vector<string>& v) 
    {
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        if(v.size()==0)
            return 0;
        set<string> s;
        for(int i=0;i<v.size();i++)
        {
            string ss="";
            for(int j=0;j<v[i].size();j++)
                ss+=arr[v[i][j]-'a'];
            s.insert(ss);
        }
        return s.size();
    }
};
