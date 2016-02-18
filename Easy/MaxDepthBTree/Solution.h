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

class Solution {
public:
    int maxDepth(TreeNode* root)
    {
        if (root == NULL)
            return 0;
            
        // check if leaf
        if (root->left == NULL && root->right == NULL)
            return 1;
        
        //  check if needs to be compared
        if (root->left != NULL && root->right != NULL)
        {
            int leftDepth = maxDepth(root->left);
            int rightDepth = maxDepth(root->right);
        
            if (leftDepth > rightDepth)
                return leftDepth + 1;
            else
                return rightDepth + 1;
        }
        
        // go deeper to the right or left branch
        if (root->left != NULL)
            return maxDepth(root->left) + 1;
        
        if (root->right != NULL)
            return maxDepth(root->right) + 1;
    }
};
