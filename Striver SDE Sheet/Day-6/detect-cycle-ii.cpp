class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* cur=head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {                      
                while(slow != cur) {               
                    slow  = slow->next;
                    cur = cur->next;
                }
                return cur;
            }
    }
        return NULL;
    }
};