/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class SameTree {
public:
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if (p == NULL && q == NULL)
            return true;
        
        if ((p == NULL && q != NULL) || (p != NULL && q == NULL))
            return false;
        
        // here p and q should not be null
        if (p->val != q->val)
            return false;
        
        // check childrens
        if (isSameTree(p->left, q->left) == false)
            return false;
        
        if (isSameTree(p->right, q->right) == false)
            return false;
            
        return true;
        
    }
};
