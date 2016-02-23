#include <list>

using namespace std;
class Queue {
private:
    list<int> stack;
public:
    /*
                      BACK
         push         pop/peek
        ._____________.
        |_____________|    - queue
     
         ...          push/pop/peek
        ._____________.
        |_____________|    - stack
        
        pop/peek/empty will be the same. 
        push - we create a stack2. pop items from stak to stack2. push new item to stack, pop items from stack2 to stack
    */
    // Push element x to the back of queue.
    void push(int x)
    {
        list<int> stack2;
        while (stack.empty() == false)
        {
            stack2.push_back(stack.back());
            stack.pop_back();
        }
        
        stack.push_back(x);
        while (stack2.empty() == false)
        {
            stack.push_back(stack2.back());
            stack2.pop_back();
        }
    }

    // Removes the element from in front of queue.
    void pop(void)
    {
        if (stack.empty() == false)
            stack.pop_back();
    }

    // Get the front element.
    int peek(void)
    {
        int retval = -1;
        if (stack.empty() == false)
            retval = stack.back();
        
        return retval;
    }

    // Return whether the queue is empty.
    bool empty(void)
    {
        return stack.empty();
    }
};
