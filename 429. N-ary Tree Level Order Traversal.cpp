///429. N-ary Tree Level Order Traversal
///Author: Ognjen Arsenijevic
///username: ognjen1998
/*
// Definition for a Node.
class Node 
{
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
    vector<int> arr[1005];
    void solve(Node* root,int lvl)
    {
        if(root==NULL) return;
        arr[lvl].push_back(root->val);
        for(int i=0;i<root->children.size();i++)
            solve(root->children[i],lvl+1);
    }
    vector<vector<int>> levelOrder(Node* root)
    {
        vector<vector<int>> ans;
        solve(root,0);
        for(int i=0;i<1001;i++)
        {
            if(arr[i].size()==0)
                return ans;
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
