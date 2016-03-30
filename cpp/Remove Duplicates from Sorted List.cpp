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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
        return head;
    }
    ListNode*p1 = head->next;
    ListNode*p2 = head;
    while (head&&head->next) {

        if (head->val==p1->val) {
            head->next = p1->next;
            p1 = p1->next;
        }
        else
        {
            head = head->next;
            p1 =p1->next;
        }
    }
    return p2;  
    }
};