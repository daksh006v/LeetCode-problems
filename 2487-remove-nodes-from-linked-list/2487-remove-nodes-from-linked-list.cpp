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

    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* one = head;

        while (one) {
            ListNode* next = one->next;
            one->next = prev;
            prev = one;
            one = next;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        int max = head->val;
        ListNode* curr = head;

        while (curr && curr->next) {
            if (curr->next->val < max) {
                curr->next = curr->next->next;
            } 
            else {
                curr = curr->next;
                max = curr->val;
            }
        }

        return reverse(head);
    }
};