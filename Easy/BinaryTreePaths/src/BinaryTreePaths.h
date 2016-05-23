/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <list>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct StackItem {
    TreeNode *curr;
    int pos;
    StackItem(TreeNode *newCurr, int newPos)
    {
        this->curr=newCurr;
        this->pos = newPos;
    }
};
typedef list<StackItem> RecurStack;

class BinaryTreePaths {
public:

    string buildPath(RecurStack &stack)
    {
        stringstream strm;
        RecurStack::iterator it = stack.begin();
        while (it != stack.end())
        {
            
            if (it != stack.begin())
            {
                strm << "->";
            }
            strm << it->curr->val;
            
            ++it;
        }
        
        return strm.str();
    }
    
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> treePaths;
        
        if (root == NULL)
        {
            //cout << "root is null" << endl;
            return treePaths;
        }

        // simulate recursion here with StackItem

        RecurStack stack;
        // add root into the first place
        stack.push_back(StackItem(root, 0));
        //cout << "push " << stack.back().curr->val << " 0" << endl;
        
        // main stack/recursion loop
        while ( ! stack.empty() )
        {
            // check if left child exists
            if (stack.back().pos == 0)
            {
                stack.back().pos = 1;
                //cout << "set " << stack.back().curr->val << " 1" << endl;
                if (stack.back().curr->left != NULL)
                {
                    stack.push_back(StackItem(stack.back().curr->left, 0));
                    //cout << "push " << stack.back().curr->val << " 0" << endl;
                    continue;
                }
            }

            // check if right child exists
            if (stack.back().pos == 1)
            {
                stack.back().pos = 2;
                //cout << "set " << stack.back().curr->val << " 2" << endl;
                if (stack.back().curr->right != NULL)
                {
                    stack.push_back(StackItem(stack.back().curr->right, 0));
                    //cout << "push " << stack.back().curr->val << " 0" << endl;
                    continue;
                }
            }

            // check if its a leaf
            if (stack.back().pos == 2)
            {
                // no need to increase a pos anymore
                if (    stack.back().curr->left == NULL
                     && stack.back().curr->right == NULL)
                {
                    // pring stack here
                    string path = buildPath(stack);
                    treePaths.push_back(path);
                    //cout << "Path: " << path << endl;
                }
            }

            // end of iteration
            //cout << "pop  " << stack.back().curr->val << ' ' << stack.back().pos << endl;
            stack.pop_back();
        }
        
        return treePaths;
    }
};
