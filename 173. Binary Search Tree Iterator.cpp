///173. Binary Search Tree Iterator
///Author: Ognjen Arsenijevic
///username: ognjen1998
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator 
{
public:
    multiset<int> ms;
    multiset<int>::iterator it;
    void fill(TreeNode* root)
    {
        if(root==NULL) return;
        ms.insert(root->val);
        fill(root->left);
        fill(root->right);
    }
    BSTIterator(TreeNode* root) 
    {
        fill(root);
        it=ms.begin();
    }
    
    /** @return the next smallest number */
    int next() 
    {
        int val=*it;
        it++;
        return val;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() 
    {
        return it!=ms.end();    
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
