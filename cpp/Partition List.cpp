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
    ListNode* partition(ListNode* head, int x) {
        ListNode *result = head;
    
    ListNode *pa1 = head,*pb1 = head;
    ListNode *pa2 = head,*pb2 = head;
    int flag1 = 0;
    int flag2 = 0;
    while (head) {
        if(head->val>=x)
        {
            pb1 = head;
            pb2 = head;
            flag1 = 1;
            break;
        }
        
        head = head->next;
    }
    
    head =result;
    while (head) {
        if(head->val<x)
        {
            pa1 = head;
            pa2 = head;
            flag2= 1;
            break;
        }
        
        head = head->next;
    }
    
    
    if (flag1&&flag2) {
        head =result;
        
        while (head) {
            if(head->val>=x)
            {
                if (flag1 ==1) {
                    flag1=2;
                }
                else
                {
                pb2->next = head;
                pb2 = head;
                }
            }
            else
            {
                if (flag2 ==1) {
                    flag2 =2;
                }
                else
                {
                pa2->next = head;
                pa2 = head;
                }
            }
            head = head->next;
        }
        pa2->next = pb1;
        pb2->next = NULL;
        
        
        return pa1;

    }
    else
        return result;
    }
};