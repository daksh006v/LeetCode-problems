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
        set <ListNode*> address;
        ListNode* i = head;
        while (i != NULL){
            if(address.count(i)){
                return i;
            }
            address.insert(i);
            i = i->next;
        }
        return NULL;
    }
};