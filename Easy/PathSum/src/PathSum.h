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

class PathSum {
public:
    // go through the tree and check sum only when reached the leaf
    bool hasPathSum(TreeNode* root, int sum)
    {
        // should occur with root tree only
        if (root == NULL)
                return false;

        // check if current node is a leaf
        if (root->left == NULL && root->right == NULL)
        {
            if (root->val == sum)
                return true;
            else
                return false;
        }
        
        if (root->left != NULL)
        {
            bool res = hasPathSum(root->left, sum - root->val);
            if (res)
                return res;
        }
        
        if (root->right !=NULL)
        {
            bool res = hasPathSum(root->right, sum - root->val);
            if (res)
                return res;
        }
        
        return false;
    }
};
