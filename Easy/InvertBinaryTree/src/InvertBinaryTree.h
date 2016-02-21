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

class InvertBinaryTree {
public:
    TreeNode* invertTree(TreeNode* root)
    {
        if (root != NULL)
        {
            TreeNode *tmp = root->left;
            root->left = root->right;
            root->right = tmp;
            
            invertTree(root->left);
            invertTree(root->right);
        }
        
        return root;
        
    }
};
