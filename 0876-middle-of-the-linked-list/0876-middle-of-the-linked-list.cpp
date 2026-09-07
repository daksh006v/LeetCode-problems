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
    ListNode* middleNode(ListNode* head) {
       ListNode* i =  head;
       int count = 0;

       while(i != NULL){
        count++;
        i=i->next;
       }

        int mid = (count / 2) + 1;

        count = 1;
        i=head;
        while(count<mid){
            i=i->next;
            count++;
        }
        return i;
    }
};