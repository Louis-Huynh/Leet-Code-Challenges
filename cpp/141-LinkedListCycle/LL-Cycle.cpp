/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

bool hasCycle(ListNode *head) {
    ListNode *a = head, *b = head;

    while (b != NULL)
    {
        b = b->next;
        if (b == NULL)
        {
            printf("no cycle.\n");
            return false;
        }
        a = a->next;
        b = b->next;
        if (a == b)
        {
            printf("cycle yo");
            return true;
        }
    }
    return false;
    
}
