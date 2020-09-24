/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
*/

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
    ListNode *aPt = headA, *bPt = headB;
    std::unordered_map<ListNode *, int> tracker;
    while (aPt != NULL)
    {
        tracker[aPt] = aPt->val;
        aPt = aPt->next;
    }
    while(bPt !=NULL){
        if (tracker.count(bPt))
        {
            return bPt;
        }
        else{
            tracker[bPt] = bPt->val;
            bPt = bPt->next;
        }
        
    }

    return NULL;
}