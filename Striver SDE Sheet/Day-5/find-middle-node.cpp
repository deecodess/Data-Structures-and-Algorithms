class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next-> next;
        }
        return slow;
    }
};