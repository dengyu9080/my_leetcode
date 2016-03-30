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
    
    ListNode dummy1(-1);
    ListNode *p1 = &dummy1;
    p1->next = head->next;
    
    ListNode dummy2(-1);
    ListNode *p2 = &dummy2;
    p2->next = head;
    ListNode *p3 = head;
    
    while (p2->next) {
        head = p2->next;
        p3 = head->next;
        
        if (!p3) {
            break;
        }
        head->next = p3->next;
        
        p3->next = head;
        p2->next = p3;
        p2 = head;
    }
    
    return p1->next;
    }
};