///951. Flip Equivalent Binary Trees
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
class Solution 
{
public:
    map<int,int> m;
    void preorder1(TreeNode* node) 
    { 
        if (node == NULL) 
            return; 
        if(node->left!=NULL)
            m[node->left->val]+=node->val;
        if(node->right!=NULL)
            m[node->right->val]+=node->val;
        preorder1(node->left);  
        preorder1(node->right); 
    }
    void preorder2(TreeNode* node) 
    { 
        if (node == NULL) 
            return; 
        if(node->left!=NULL)
            m[node->left->val]-=node->val;
        if(node->right!=NULL)
            m[node->right->val]-=node->val;
        preorder2(node->left);  
        preorder2(node->right); 
    }
    
    bool flipEquiv(TreeNode* root1, TreeNode* root2) 
    {
        if(root1==NULL && root2==NULL) return true;
        if(root1==NULL) return false;
        if(root2==NULL) return false;
        if(root1->val != root2->val) return false;
        preorder1(root1);
        preorder2(root2);
        for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
        {
            if(it->second!=0)
                return false;
        }
        return true;
        
    }
};
