/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <vector>
#include <list>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class LevelTraversalBT {
public:
    vector<vector<int> > levelOrder(TreeNode* root)
    {
        vector<vector<int> > finalMrx;
        list<TreeNode *> currRowQ;
        list<TreeNode *> nextRowQ;
        vector<int> values;
        
        if (root != NULL)
            currRowQ.push_back(root);
        
        while (!currRowQ.empty())
        {
            values.push_back(currRowQ.front()->val);
            
            if (currRowQ.front()->left)
                nextRowQ.push_back(currRowQ.front()->left);
            if (currRowQ.front()->right)
                nextRowQ.push_back(currRowQ.front()->right);
            
            currRowQ.pop_front();
            
            //if this is the end of curr row
            if (currRowQ.empty())
            {
                finalMrx.push_back(values);
                values.clear();
                currRowQ = nextRowQ;
                nextRowQ.clear();
            }
        }
        
        return finalMrx;
        
    }
};
