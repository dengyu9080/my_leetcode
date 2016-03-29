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
        if (m==1) {
        ListNode* pa = head;
        ListNode* pb = head;
        for (int i = 1; i<n; i++) {
            head = pa->next;
            pa->next = head->next;
            head->next = pb;
            pb = head;
            
        }
        
        return pb;

    }
    else{
    
    ListNode* result =head;
    
        for (int i = 1; i<m-1; i++) {
            head = head->next;
            
        }
    ListNode* pa = head;
    ListNode* pb = head->next;
    
    for (int i = m; i<n; i++) {
        head = pb->next;
        pb->next = head->next;
        head->next = pa->next;
        pa->next = head;

        
    }
    
    
    return result;
    }
    }
};