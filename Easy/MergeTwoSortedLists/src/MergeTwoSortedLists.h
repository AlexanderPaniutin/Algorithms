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

class MergeTwoSortedLists {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        // check if one is empty
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;
            
        ListNode* newHead = NULL;
        ListNode* lastAdded = NULL;
        ListNode* source = NULL;
        
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                source = l1;
                l1 = l1->next;
            }
            else
            {
                source = l2;
                l2 = l2->next;
            }
                
            if (newHead == NULL)
            {
                newHead = source;
                lastAdded = source;
            }
            else
            {
                lastAdded->next = source;
                lastAdded = lastAdded->next;
            }
        }
        
        // only one list may not be null;
        if (l1 != NULL)
            lastAdded->next = l1;
        
        if (l2 != NULL)
            lastAdded->next = l2;
            
        return newHead;
    }
};
