/* Insertion in Doubly Linked List*/
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void InsertatHead(Node* &head, int d){
    Node* temp=new Node(d);
    if(head!=NULL){
        head->prev=temp;
    temp->next=head;
    head=temp;
    }
    else{
        head=temp;
    }
    
}
void InsertatTail(Node* &head,int d){
    Node* temp=new Node(d);
    Node* temp1=head;
    if(head == NULL)
    {
        head = temp;
        return;
    }
    else{
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->prev=temp1;
    }
}

void InsertatPosition(Node* &head, int d, int val){
    Node* temp=new Node(d);
    Node* temp1=head;
    if(head==NULL){
        head=temp;
        return;
    }
    else{
        while(temp1 && temp1->data!=val){
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp->prev=temp1;
        temp1->next=temp;
        temp1->next->prev=temp;
    }
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    InsertatHead(head,5);
    print(head);
    InsertatHead(head,10);
    print(head);
    InsertatTail(head,15);
    print(head);
    InsertatPosition(head,20,10);
    print(head);
    return 0;
}
