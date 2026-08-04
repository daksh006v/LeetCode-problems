/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* travel = head;

        while(travel != NULL && travel->next != NULL){

            if(travel->val == travel->next->val){
                travel->next = travel->next->next;
            }
            else{
            travel  = travel->next;
            }
        }

        return head;
    }
};