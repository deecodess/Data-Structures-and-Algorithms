class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* cur=head;
        ListNode* prev=NULL;
        ListNode* temp;

        while(cur){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
        
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(head->val!=slow->val) return false;
            
                head=head->next;
                slow=slow->next;
        }
        return true;
    }
};