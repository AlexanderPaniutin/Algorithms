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

class RemoveDuplicatesFromSortedList {
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        if (head == NULL)
            return head;
        
        ListNode *newHead = head;
        
        while (head->next != NULL)
        {
            if (head->val == head->next->val)
            {
                // remove the second item
                head->next = head->next->next;
            }
            else
            {
                // move forward
                head = head->next;
            }
        }
        
        return newHead;
    }
};
