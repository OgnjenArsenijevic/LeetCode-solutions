///720. Longest Word in Dictionary
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
    
    bool search(string word)
    {
        TRIE_NODE *crawl=root;
        for(int i=0;i<word.size();i++)
        {
            int idx=word[i]-'a';
            if(!crawl->children[idx])
                return false;
            crawl=crawl->children[idx];
        }
        return (crawl!=NULL && crawl->isEndOfWord);
    }
    
    string ans="";
    
    void dfs(TrieNode* node, string curr)
    {
        if(node->isEndOfWord)
        {
            if(curr.size()>ans.size())
                ans=curr;
            else
            {
                if(curr.size()==ans.size())
                    ans=min(ans,curr);
            }
        }
        for(int i=0;i<ALPHABET_SIZE;i++)
        {
            char ch='a'+i;
            if(node->children[i])
                dfs(node->children[i],curr+ch);
        }
    }
    
    string longestWord(vector<string>& words)
    {
        root=getNode();
        sort(words.begin(),words.end());
        for(int i=0;i<words.size();i++)
        {
            if(words[i].size()==1)
                insert(words[i]);
            else
            {
                string tmp="";
                for(int j=0;j<words[i].size()-1;j++)
                    tmp+=words[i][j];
                if(search(tmp))
                    insert(words[i]);  
            }
        }
        dfs(root,"");
        return ans;
    }
};
