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

class SymmetricTree {
public:
    bool isMirror(TreeNode *leftHead, TreeNode *rightHead)
    {
        if (leftHead == NULL && rightHead == NULL)
            return true;
        else if (leftHead != NULL && rightHead != NULL)
        {
            // check values
            if (leftHead->val != rightHead->val)
                return false;
                
            // check children
            if (isMirror(leftHead->left, rightHead->right) == false)
                return false;
            
            if (isMirror(leftHead->right, rightHead->left) == false)
                return false;
                
            return true;
        }
        else 
            // here one of heads is null but another one is not
            return false;
    }
    
    bool isSymmetric(TreeNode* root)
    {
        if (root == NULL)
            return true;
        
        return isMirror(root->left, root->right);
    }
};
