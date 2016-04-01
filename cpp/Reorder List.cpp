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
    void reorderList(ListNode* head) {
        if (head)
    {
    int n = 0;
    ListNode *p1 = head;
    for (; head; head=head->next,n++);
    head = p1;
    
    for (n = (n+1)/2; n>1; head=head->next,n--);
    
    ListNode *pre=NULL,*tmp;
    tmp = head->next;
    head->next = NULL;
    head = tmp;
    while(head){
        tmp=head->next;
        head->next=pre;
        pre=head;
        head=tmp;
    }
    
    
    head = p1;

    while (pre&&head) {
        tmp = head->next;
        head->next = pre;
        head = tmp;
        tmp = pre->next;
        pre->next = head;
        pre = tmp;
    }
    
    head = p1;
    }
    }
};