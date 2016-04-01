/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
       RandomListNode dummy(-1);

    RandomListNode *copy = &dummy;
    RandomListNode *p1 = head;
    
    unordered_map<RandomListNode*,RandomListNode*> link;
    
    while (head) {
        copy->next = new RandomListNode(head->label);
        link[head] = copy->next;
        copy = copy->next;
        head = head->next;
    }
    
    head = p1;
    copy = dummy.next;
    while (head) {
        copy->random = (head->random)?link[head->random]:NULL;
        copy = copy->next;
        head = head->next;
    }
    
    return dummy.next;
        
    }
};