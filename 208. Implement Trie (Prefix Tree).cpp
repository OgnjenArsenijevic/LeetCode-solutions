///208. Implement Trie (Prefix Tree)
///Author: Ognjen Arsenijevic
///username: ognjen1998
class Trie 
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
    
    TRIE_NODE *root;
    
    Trie() 
    {
        root=getNode();
    }
    
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
    
    /** Returns if the word is in the trie. */
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
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) 
    {
        TRIE_NODE *crawl=root;
        for(int i=0;i<prefix.size();i++)
        {
            int idx=prefix[i]-'a';
            if(!crawl->children[idx])
                return false;
            crawl=crawl->children[idx];
        }
        return (crawl!=NULL); 
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
