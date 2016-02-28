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

class TwoLinkedListCrossing {
public:
    int getSize(ListNode *head)
    {
        int size = 0;
        while (head != NULL)
        {
            ++size;
            head = head->next;
        }
        
        return size;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int sizeA = getSize(headA);
        int sizeB = getSize(headB);
        
        ListNode *newHeadA = headA;
        ListNode *newHeadB = headB;
        
        while (sizeA != sizeB && newHeadA != NULL && newHeadB != NULL)
        {
            if (sizeA > sizeB)
            {
                newHeadA = newHeadA->next;
                --sizeA;
            }
            else if (sizeB > sizeA)
            {
                newHeadB = newHeadB->next;
                --sizeB;
            }
        }
        
        // here both new heads should have same list size
        
        ListNode *commonHead = NULL;
        while (newHeadA != NULL && newHeadB != NULL)
        {
            if (newHeadA == newHeadB)
            {
                commonHead = newHeadA;
                break;
            }
            
            newHeadA = newHeadA->next;
            newHeadB = newHeadB->next;
        }
        
        return commonHead;
    }
};
