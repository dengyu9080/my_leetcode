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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode dummy(-1);
    dummy.next = head;
    
    ListNode* pa = &dummy;
    for (int i = 1; i<m; i++) {
        pa = pa->next;
    }
    
    ListNode* pb = pa->next;
    for (int i = m; i<n; i++) {
        head = pb->next;
        pb->next = head->next;
        head->next = pa->next;
        pa->next = head;
        
    }
    
    return dummy.next;
    }
};