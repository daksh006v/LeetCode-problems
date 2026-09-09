class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;

        ListNode* i = head;
        ListNode* j = head;

        // Find middle
        while (j != NULL && j->next != NULL) {
            i = i->next;
            j = j->next->next;
        }

        // i is at middle (or start of second half)
        ListNode* address = NULL;

        // Reverse second half
        while (i != NULL) {
            ListNode* temp = i->next;
            i->next = address;
            address = i;
            i = temp;
        }

        // Compare first half with reversed second half
        i = head;
        j = address;

        while (j != NULL) {
            if (i->val != j->val)
                return false;

            i = i->next;
            j = j->next;
        }

        return true;
    }
};