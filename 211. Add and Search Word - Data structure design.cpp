///211. Add and Search Word - Data structure design
///Author: Ognjen Arsenijevic
///username: ognjen1998
class WordDictionary
{
public:
    /** Initialize your data structure here. */
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
    
    TRIE_NODE *root=NULL;
    
    WordDictionary() 
    {
        root=getNode();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) 
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
    
    bool solve(const char *ptr, TRIE_NODE* node)
    {
        if(*ptr==NULL) return node->isEndOfWord;
        if(*ptr!='.')
        {
            int idx=*ptr-'a';
            if(!node->children[idx])
                return false;
            return solve(ptr+1,node->children[idx]);
        }
        bool flag=false;
        for(int i=0;i<ALPHABET_SIZE;i++)
        {
            if(node->children[i])
                flag|=solve(ptr+1,node->children[i]);
        }
        return flag;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) 
    {
        return solve(word.c_str(),root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
