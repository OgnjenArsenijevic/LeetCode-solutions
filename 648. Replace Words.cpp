///648. Replace Words
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Solution 
{
public:
    static const int ALPHABET_SIZE=26;
    typedef struct TrieNode
    {
        struct TrieNode* children[ALPHABET_SIZE];
        bool isEndOfWord;
    }TRIE_NODE;
    
    TRIE_NODE* getNode()
    {
        TRIE_NODE *node=new TrieNode;
        node->isEndOfWord=false;
        for(int i=0;i<ALPHABET_SIZE;i++)
            node->children[i]=NULL;
        return node;
    }
    
    TRIE_NODE *root;
    
    /** Inserts a word into the trie. */
    void insert(string word)
    {
        TRIE_NODE *crawl=root;
        for(int i=0;i<word.size();i++)
        {
            int idx=word[i]-'a';
            if(!crawl->children[idx])
                crawl->children[idx]=getNode();
            crawl=crawl->children[idx];
        }
        crawl->isEndOfWord=true;
    }
    
    string pref(string word)
    {
        string ans="";
        TRIE_NODE *crawl=root;
        for(int i=0;i<word.size();i++)
        {
            int idx=word[i]-'a';
            if(!crawl->children[idx])
                return "";
            ans+=word[i];
            crawl=crawl->children[idx];
            if(crawl->isEndOfWord) return ans;
        }
        return ans;
    }
    
    string replaceWords(vector<string>& dict, string sentence) 
    {
        root=getNode();
        for(int i=0;i<dict.size();i++)
            insert(dict[i]);
        vector<string> v;
        string curr="";
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]<='z' && sentence[i]>='a')
                curr+=sentence[i];
            else
            {
                v.push_back(curr);
                curr="";
            }
        }
        v.push_back(curr);
        for(int i=0;i<v.size();i++)
        {
            string curr=pref(v[i]);
            if(curr.size()>0)
                v[i]=curr;
        }
        string ans="";
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i];
            if(i<v.size()-1)
                ans+=" ";
        }
        return ans;
    }
};
