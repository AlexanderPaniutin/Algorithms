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

class IsBalancedBT {
public:
    
    bool checkIfBalanced(TreeNode *head, int &level)
    {
        if (head == NULL)
        {
            level = 0;
            return true;
        }
        
        int depLeft = 0;
        int depRight = 0;
        
        if (checkIfBalanced(head->left, depLeft) == false)
            return false;
        
        if (checkIfBalanced(head->right, depRight) == false)
            return false;
            
        int depDiff = depLeft - depRight;
        if (depDiff == 0 || depDiff == 1 || depDiff == -1)
        {
            level = (depLeft > depRight ? depLeft : depRight) +  1;
            return true;
        }
        
        return false;
    }
    
    bool isBalanced(TreeNode* root)
    {
        if (root == NULL)
            return true;
        
        int depth = 0;
        return checkIfBalanced(root, depth);
    }
};
