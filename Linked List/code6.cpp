/* Deletion in Doubly Linked List*/
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
void DeletionAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    delete temp;
}
void DeletionAtTail(Node* &head){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    delete temp;
}
void DeletionAtPosition(Node* &head, int val){
    Node* temp=head;
    while(temp && temp->data!=val){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
}
void printreverse(Node* &head){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
}
int main(){
    Node* head=NULL;
    cout<<"Enter the size of LinkedList: ";
    int n;
    cin>>n;
    cout<<"Enter the elements of LinkedList: ";
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        InsertatHead(head,d);
    }
    print(head);
    cout<<"Enter the element you want to delete: ";
    int val;
    cin>>val;
    DeletionAtPosition(head,val);
    print(head);
    cout<<"Reverse of the LinkedList is: ";
    printreverse(head);

    return 0;
}