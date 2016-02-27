#include <list>

using namespace std;
class StackByQueue {
public:
    // Push element x onto stack.
    void push(int x)
    {
        list<int> newQ;
        
        // put x item as a first one in a queue
        newQ.push_back(x);
        
        // copy all the rest of the items
        while (queue.empty() == false)
        {
            newQ.push_back(queue.front());
            queue.pop_front();
        }
        
        queue = newQ;
    }

    // Removes the element on top of the stack.
    void pop()
    {
        queue.pop_front();
    }

    // Get the top element.
    int top()
    {
        return queue.front();
    }

    // Return whether the stack is empty.
    bool empty()
    {
        return queue.empty();
    }
    
    list<int> queue;
    //list<int> queue2;
    //bool useSecondDS;
};
