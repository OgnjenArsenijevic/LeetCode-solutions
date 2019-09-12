///212. Word Search II
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
    
    TRIE_NODE *trie;
    
    TRIE_NODE* getNode()
    {
        TRIE_NODE *node=new TrieNode;
        node->isEndOfWord=false;
        for(int i=0;i<ALPHABET_SIZE;i++)
            node->children[i]=NULL;
        return node;
    }
    
    void insert(TRIE_NODE* root, string word)
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
    
    bool search(TRIE_NODE* root, string word)
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
    
    bool prefix(TRIE_NODE* root, string word)
    {
        TRIE_NODE *crawl=root;
        for(int i=0;i<word.size();i++)
        {
            int idx=word[i]-'a';
            if(!crawl->children[idx])
                return false;
            crawl=crawl->children[idx];
        }
        return (crawl!=NULL);
    }
    
    int korI[4]={1,0,-1,0};
    int korJ[4]={0,1,0,-1};
    vector<string> ans;
    
    void dfs(vector<vector<char>>& board, int i, int j, string
             curr, set<pair<int,int>> used)
    {
        if(!prefix(trie,curr)) return;
        if(search(trie,curr)) ans.push_back(curr);
        used.insert(make_pair(i,j));
        for(int rr=0;rr<4;rr++)
        {
            int ii=i+korI[rr];
            int jj=j+korJ[rr];
            if(ii>=0 && ii<board.size() && jj>=0 && jj<board[0].size() && used.find(make_pair(ii,jj))==used.end())
                dfs(board,ii,jj,curr+board[ii][jj],used);
        }
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) 
    {
        trie=getNode();
        if(board.empty()) return ans;
        for(int i=0;i<words.size();i++)
            insert(trie,words[i]);
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                set<pair<int,int> > used;
                string curr="";
                curr+=board[i][j];
                dfs(board,i,j,curr,used);
            }
        }
        unordered_set<string> ust;
        for(int i=0;i<ans.size();i++)
            ust.insert(ans[i]);
        ans.clear();
        for(unordered_set<string>::iterator it=ust.begin();it!=ust.end();it++)
            ans.push_back(*it);
        return ans;
    }
};
