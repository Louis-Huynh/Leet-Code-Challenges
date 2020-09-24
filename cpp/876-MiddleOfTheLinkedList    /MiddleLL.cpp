/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* middleNode(ListNode* head) {
        
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *a = head, *b = head;
    while (b != NULL)
    {
        b = b->next;
        if (b == NULL)
        {
            return a;
        }
        a = a->next;
        b = b->next;
    }
    return a;
       
}