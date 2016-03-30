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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode *p1 = head;
    int k = 0;
    while (head) {
        k++;
        head = head->next;
    }
    
    if (k==n) {
        return p1->next;
    }
    
    head = p1;
    while (k-->(n+1)) {
        head = head->next;
    }
    ListNode *p2 = head->next;
    head->next = p2?p2->next:NULL;
    
    return p1;
    }
};