/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class DeleteNodeInLinkedList {
public:
    void deleteNode(ListNode* node)
    {
        if (node == NULL)
            return;
        
        if (node->next == NULL)
            return;
            
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
