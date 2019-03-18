///559. Maximum Depth of N-ary Tree
///Author: Ognjen Arsenijevic
///username: ognjen1998
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution 
{
public:
    int maxi=0;
    void solve(Node* root,int lvl)
    {
        if(root==nullptr) return;
        maxi=max(maxi,lvl);
        for(int i=0;i<root->children.size();i++)
            solve(root->children[i],lvl+1);
    }
    int maxDepth(Node* root) 
    {
        solve(root,1);
        return maxi;
    }
};
