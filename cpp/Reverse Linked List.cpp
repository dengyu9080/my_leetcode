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
    ListNode* reverseList(ListNode* head) {
        ListNode *p1 = nullptr,*p2 = head;
    while (head) {
        p2 = head->next;
        head->next = p1;
        p1 = head;
        head = p2;
    }
    return p1;
    }
};