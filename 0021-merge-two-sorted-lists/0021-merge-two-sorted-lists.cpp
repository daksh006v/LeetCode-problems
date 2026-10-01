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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr){
            return list2;
        }
        if (list2 == nullptr){
            return list1;
        }
         
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* k = new ListNode();
        ListNode* ans = k;

        while(i != nullptr && j !=nullptr ){
            if(i->val>=j->val){
                k->next = j;
                j = j->next;
            }
            else{
                k->next = i;
                i=i->next;
            }
            k = k->next;
        }

        if (i != nullptr) {
            k->next = i;
        }
        else {
            k->next = j;
        }

        return ans->next;
    }
};