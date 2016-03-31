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
    ListNode* reverseKGroup(ListNode* head, int k) {
            if (k<2) {
        return head;
    }
    
    
    ListNode dummy(-1);
    dummy.next = head;
    ListNode *p1 = &dummy;
    
    
    if (head) {
        for (int n =k ; n>0; n--) {
            p1 = p1->next;
            if (!p1) {
                return head;
            }
        }
    }
    else
        return head;//head =NULL;
    ListNode *p2 = p1;
    ListNode *p3 = head;
    ListNode *p4 = p3->next;
    ListNode *p5 = p1;
    int flag = 0;
    while (p2) {
        if (!flag) {
            for (int n =1 ; n<k; n++) {
                p4 = head->next;
                head->next = p4->next;
                p4->next = p3;
                p3 = p4;
                // ListPrint(p3);

            }

            

        }
        
        if (p5!=p1) {
            p5->next = p2;
        }
        
        p2 = head;
        for (int n =k ; n>0; n--) {
            p2 = p2?p2->next:NULL;
            if (!p2) {
                flag = 1;
            }
        }

        
        if (!flag) {
            p5 = head;
            head = head->next;
            p3 = head;
        }
        
    }

    
    
    return p1;
    }
};