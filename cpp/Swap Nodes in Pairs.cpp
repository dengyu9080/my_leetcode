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
    ListNode* swapPairs(ListNode* head) {
       if (!head||!head->next) {
        return head;
    }
    
    ListNode *result = head->next;
    ListNode *p1= head;
    ListNode *p2 = p1->next;
    ListNode *p3 = p2?p2->next:NULL;
    ListNode *p4 = p3?p3->next:NULL;
    
    while (p1||p2||p3||p4) {
        if(p2)
            p2->next = p1;
        if (p1)
            p1->next = p4?p4:p3;

        p1 = p4?p4->next:NULL;
        p2 = p1?p1->next:NULL;
        
        if(p4)
            p4->next = p3;
        if (p3)
            p3->next = p2?p2:p1;
        
        p3 = p2?p2->next:NULL;
        p4 = p3?p3->next:NULL;
        
    }
    
    return result;
    }
};