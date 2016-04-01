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
    bool hasCycle(ListNode *head) {
        if (!head||!head->next) {
        return false;
    }
    
    set<ListNode*>myset;
    
    while (head) {
        if(myset.find(head)==myset.end())
        {
            myset.insert(head);
        }
        else
            return true;
        
        head = head->next;
        
    }
    
    return false;
    }
};