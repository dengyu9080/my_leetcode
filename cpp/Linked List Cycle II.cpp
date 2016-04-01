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
    ListNode *detectCycle(ListNode *head) {
        if (!head||!head->next) {
        return NULL;
    }
    
    set<ListNode*>myset;
    while (head) {
        if (myset.find(head)==myset.end()) {
            myset.insert(head);
        }
        else
            return head;
        head = head->next;
    }
    
    return NULL;
    }
};