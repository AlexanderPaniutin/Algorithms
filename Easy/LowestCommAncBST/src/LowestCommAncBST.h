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

class LowestCommAncBST {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        TreeNode *curr = root;
        while (curr != NULL)
        {
            if (p->val == curr->val || q->val == curr->val)
                return curr;
        
            if (p->val < curr->val && q->val < curr->val)
            {
                curr = curr->left;
                continue;
            }
            
            if (p->val > curr->val && q->val > curr->val)
            {
                curr = curr->right;
                continue;
            }
            
            // items seems like got separated.
            return curr;
        }

        // here we need to return NULL since the tree is empty
        return NULL;
    }
};
