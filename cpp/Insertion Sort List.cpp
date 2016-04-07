/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (!head||!head->next) {
        return head;
    }
    
    ListNode dummy(INT_MIN);
    ListNode *ihead = &dummy;
    ihead->next =head;
    head = head?head->next:nullptr;
    ihead->next->next = nullptr;
    
    
    while (head) {
        ListNode *icur = ihead;
        ListNode *icur2 = icur->next;
        
        while (icur2&&icur2->val<=head->val) {
            icur = icur->next;
            icur2 = icur2->next;
        }
        
        if (icur2) {
            icur->next =head;
            head = head->next;
            icur->next->next = icur2;
        }
        else
        {
            icur ->next = head;
            head = head->next;
            icur = icur->next;
            icur->next = nullptr;
        }
    }
    
    
    return ihead->next;
    }
};