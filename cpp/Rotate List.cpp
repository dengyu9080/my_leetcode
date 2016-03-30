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
    ListNode* rotateRight(ListNode* head, int k) {
            ListNode *p1 = head;
    int n = 0;
    while (head) {
        n++;
        head = head->next;
    }
    if(n!=0)
        k = k%n;
    if(k>=n||k==0)
        return p1;
    
    head = p1;
    while (n!=k+1) {
        n--;
        head = head->next;
    }
    ListNode *p3 = head;
    ListNode *p2 = head->next;
    while (head->next) {
        head = head->next;
    }
    head->next = p1;
    p3->next = NULL;
    return p2;
    }
};