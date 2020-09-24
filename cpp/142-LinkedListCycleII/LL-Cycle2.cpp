/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode *detectCycle(ListNode *head) {
    if (head == NULL)
    {
        return NULL;
    }
    
    ListNode *slow =head, *fast = head;
    bool hasCycle = false;

    while (fast->next != NULL && fast->next->next !=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            hasCycle = true;
            break;
        }
        }
    if (!hasCycle)
        return NULL;

    slow = head;
    while (fast != slow)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
