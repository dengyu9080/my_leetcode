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
              if (k==0) {
        return head;
    }
           ListNode *p1 = head;
    int n = 0;
    while (head) {
        n++;
        if(!head->next)
        {
            head->next = (k%n)==0?NULL:p1;
            break;
        }
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
    ListNode *p2 = head->next;
    head->next =NULL;


    return p2;
    }
};