class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;

        for(int i=0;i<n;i++){
            fast=fast->next;
        }

        if(!fast){
            head=head->next;
            return head;
        }

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next;
        }

        if(slow && slow->next){
            ListNode* temp=slow->next;
            slow->next=slow->next->next;
            delete temp;
        }
        return head;
    }
};