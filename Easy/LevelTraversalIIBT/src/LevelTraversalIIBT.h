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

#include <vector>
#include <list>

using namespace std;
class LevelTraversalIIBT {
public:
    vector<vector<int> > levelOrderBottom(TreeNode* root)
    {
        list<TreeNode*> currQ;
        list<TreeNode*> nextQ;
        vector<int> currValRow;
        vector< vector<int> > mrx;
        vector< vector<int> > revMrx;
        
        if (root != NULL)
            currQ.push_back(root);
        
        while (currQ.empty() == false)
        {
            TreeNode *node = currQ.front();
            currQ.pop_front();
            
            // put the actual value to the mrx row
            currValRow.push_back(node->val);
            
            // add left and right to the next queue
            if (node->left != NULL)
                nextQ.push_back(node->left);
            
            if (node->right != NULL)
                nextQ.push_back(node->right);
            
            // check if it is the end of the row
            if (currQ.empty())
            {
                mrx.push_back(currValRow);
                currValRow.clear();
                currQ = nextQ;
                nextQ.clear();
            }
            
        }
        
        revMrx.reserve(mrx.size());
        vector< vector<int> >::reverse_iterator rit = mrx.rbegin();
        for (; rit != mrx.rend(); ++rit)
            revMrx.push_back(*rit);
        
        return revMrx;
    }
};
