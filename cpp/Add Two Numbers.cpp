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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1) {
        return l2;
    }
    if (!l2) {
        return l1;
    }
    
    
    
    int res=0,carry = 0;

    ListNode *head,*curr;
    head = new ListNode((l1->val+l2->val)%10);
    curr = head;
    carry =(l1->val+l2->val)/10;
    while (l1->next&&l2->next) {
        l1 = l1->next;
        l2 = l2->next;
        res =l1->val+l2->val+carry;
        carry = res/10;
        ListNode *temp = new ListNode(res%10);
        curr->next = temp;
        curr = temp;
    }
    if (l2->next) {
        while (l2->next) {
            l2 = l2->next;
            res =l2->val+carry;
            carry = res/10;
            ListNode *temp = new ListNode(res%10);
            curr->next = temp;
            curr = temp;
        }
    }
    if (l1->next) {
        while (l1->next) {
            l1 = l1->next;
            res =l1->val+carry;
            carry = res/10;
            ListNode *temp = new ListNode(res%10);
            curr->next = temp;
            curr = temp;
        }
    }
    
    
    
    if (carry) {
        ListNode *temp = new ListNode(1);
        curr->next = temp;
        curr = temp;
    }

    return head;
    }
};