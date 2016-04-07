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
    ListNode* sortList(ListNode* head) {
        if (!head||!head->next)return head;
    ListNode *fast=head,*slow=head;
    while (fast->next&&fast->next->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    fast = slow->next;
    slow->next =NULL;
    return mergeTwoLists(sortList(head),sortList(fast));
    }
    
private:
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1) {
        return l2;
    }
    if (!l2) {
        return l1;
    }
    ListNode *ihead;
    
    if (l1->val<l2->val) {
        ihead = l1;
        l1 = l1->next;
    }
    else
    {
        ihead = l2;
        l2 = l2->next;
    }
    
    
    ListNode *icur = ihead;
    
    while (l1&&l2) {
        if (l1->val>l2->val) {
            icur->next = l2;
            l2 = l2->next;
            icur = icur->next;
        }
        else
        {
            icur->next = l1;
            l1 = l1->next;
            icur = icur->next;
        }
    }
    
    if (!l1) {
        icur->next = l2;
    }
    else
        icur->next = l1;
    
    return ihead;
}
};