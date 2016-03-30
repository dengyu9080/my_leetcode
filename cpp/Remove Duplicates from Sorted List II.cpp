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
      if (!head||!head->next) {
        return head;
    }
    ListNode dummy(-1);

    ListNode *p1 =&dummy;
    ListNode *p2 =&dummy;
    ListNode *p3 =head;
    int flag1 = 0;
    int flag2 = 0;
    int val = head->val;
    head=head->next;
    while (head) {
        if (val==head->val) {

            flag2 = 1;
        }
        else{
            if (flag1 ==0&&flag2 ==0) {
                p1 = p3;
                p2 = p3;
                flag1 =1;
            }
            else if (flag2==0) {
                p2->next = p3;
                p2 = p2->next;
            }
            val = head->val;
            p3 = head;
            flag2 = 0;
        }
        head = head->next;
    }
    
    if (flag1 ==0&&flag2 ==0) {
        return p3;
    }
    else if(flag1 ==0&&flag2 ==1)
    {
        return head;
    }
    else if(flag1 ==1&&flag2 ==1)
    {
        p2->next = NULL;
        return p1;
    }
    else
    {
            p2->next = p3;
            return p1;
    }
    
    }
};