///979. Distribute Coins in Binary Tree
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
    int val=0,coins=0,ans=0;
    bool check=false;
    bool isLeaf(TreeNode* node)
    {
        if(node==nullptr) return false;
        if(node->left==nullptr && node->right==nullptr) return true;
        return false;
    }
    void solve(TreeNode* node)
    {
        if(node==nullptr) return;
        val++;
        coins+=node->val;
        solve(node->left);
        solve(node->right);
    }
    void solve1(TreeNode* node)
    {
        if(node==nullptr) return;
        coins=0;
        val=0;
        solve(node->left);
        int dl=coins-val;
        coins=0;
        val=0;
        solve(node->right);
        int dr=coins-val;
        if(node->val>1)
        {
            int num=node->val-1;
            if(dl<0)
            {
                dl*=-1;
                if(num>=dl)
                {
                    num-=dl;
                    node->left->val+=dl;
                    ans+=dl;
                }
                else
                {
                    node->left->val+=num;
                    ans+=num;
                    num=0;
                }
            }
            if(dr<0)
            {
                dr*=-1;
                if(num>=dr)
                {
                    num-=dr;
                    ans+=dr;
                    node->right->val+=dr;
                }
                else
                {
                    node->right->val+=num;
                    ans+=num;
                    num=0;
                }
            }
            node->val=num+1;
        }
        solve1(node->left);
        solve1(node->right);       
    }
    void solve2(TreeNode* node)
    {
        if(node==nullptr || isLeaf(node)) return;
        bool flag=false;
        if(node->left!=nullptr)
        {
            if(node->left->val>1)
            {
                ans+=(node->left->val-1);
                node->val+=node->left->val-1;
                node->left->val=1;
                check=true;
                flag=true;
            }       
        }
        if(node->right!=nullptr)
        {
            if(node->right->val>1)
            {
                ans+=(node->right->val-1);
                node->val+=node->right->val-1;
                node->right->val=1;
                check=true;
                flag=true;
            }
        }
        if(flag)
            solve1(node);
        solve2(node->left);
        solve2(node->right);
    }
    int distributeCoins(TreeNode* root) 
    {
        solve1(root);
        check=true;
        while(check)
        {
            check=false;
            solve2(root);
        }
        return ans;
    }
};
