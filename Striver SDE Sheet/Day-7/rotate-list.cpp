class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || k==0)return head;
        ListNode* temp = head;
        int n=0;
        while(temp->next){
            temp = temp->next;
            n++;
        }
        //temp pointing to last element
        temp->next=head;
        k=k%(n+1);
        int jump=n-k;
        temp=head;
        while(jump){
            temp=temp->next;
            jump--;
        }
        ListNode* rethead=temp->next;
        temp->next=NULL;
        return rethead;
    }
};