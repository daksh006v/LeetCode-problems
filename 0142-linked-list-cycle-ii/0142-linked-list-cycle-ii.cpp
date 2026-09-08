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
        // set <ListNode*> address;
        // ListNode* i = head;
        // while (i != NULL){
        //     if(address.count(i)){
        //         return i;
        //     }
        //     address.insert(i);
        //     i = i->next;
        // }
        // return NULL;

        // soln 2:
        ListNode* i = head;
        ListNode* j = head;

        while( j != NULL && j->next != NULL ){
            i = i->next;
            j = j->next->next;

            if(i == j){
               while(head != i){
                head = head -> next;
                i = i->next;
               }
               return head;
            }
        }
        return NULL;
    }
};