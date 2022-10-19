/* Insertion at Head of a singly Linked List */
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &Head, int d){
    //new node create
    Node* Temp=new Node(d);
    Temp->next=Head;
    Head=Temp;
}

void print(Node* Head){
    Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    Node* head=node1;
    print(head);

    InsertAtHead(head,5);
    print(head);

    InsertAtHead(head,24);
    print(head);
    
    return 0;
}