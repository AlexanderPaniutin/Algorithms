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

class ReverseLinkedList {
public:
    // use recursion
    ListNode* reverseList(ListNode* head) {
        
        if (head == NULL || head->next == NULL)
            return head;
        // remember second item. it will become last after recursion.
        ListNode* afterHead = head->next;
        ListNode* newHead = reverseList(afterHead);
        
        // put the current (head) item in the end of the list
        afterHead->next = head;
        head->next = NULL;
        
        return newHead;
        
    }
};
