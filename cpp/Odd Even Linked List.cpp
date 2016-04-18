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
    ListNode* oddEvenList(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode *odd = head;
    ListNode *even = head->next;
    ListNode *result1 = odd;
    ListNode *result2 = even;
    
    head = head->next&&head->next->next?head->next->next:NULL;
    int i = 3;
    for (; head; i++,head = head->next) {
        if (i%2 == 1) {
            odd->next = head;
            odd = odd->next;
        }else{
            even->next = head;
            even = even->next;
        }
    }
    if(i%2 == 1)
        odd->next = result2;
    else
    {
        odd->next = result2;
        even->next = NULL;
    }
    
    return result1;
    }
};