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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
               int k = int(lists.size());
    if (k==0) {
        return NULL;
    }
//    ListNode *nullList = nullptr;
    for (int i = 1; i<k; i = i*2) {
        for (int j = 0; j<k; j = j+2*i) {
            lists[j] = mergeTwoLists(lists[j]?lists[j]:nullptr,(j+i)<k?lists[j+i]:nullptr);
//            ListPrint(lists[j]);
        }
    }
    return lists[0];
    }
private:
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1) {
        return l2;
    }
    if (!l2) {
        return l1;
    }
    ListNode *ihead;
    
    if (l1->val<l2->val) {
        ihead = l1;
        l1 = l1->next;
    }
    else
    {
        ihead = l2;
        l2 = l2->next;
    }
    
    
    ListNode *icur = ihead;
    
    while (l1&&l2) {
        if (l1->val>l2->val) {
            icur->next = l2;
            l2 = l2->next;
            icur = icur->next;
        }
        else
        {
            icur->next = l1;
            l1 = l1->next;
            icur = icur->next;
        }
    }
    
    if (!l1) {
        icur->next = l2;
    }
    else
        icur->next = l1;
    
    return ihead;
}

};