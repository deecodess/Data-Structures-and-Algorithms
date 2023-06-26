/* Insert at Tail of Linked List */
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL:
        }
};
void InsertatTail(Node* &Head, int d){
    Node* temp=new Node(d);
    if(Head!=NULL){
        Node* temp1=new Node(0);
        Node* temp1=Head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp->next=temp
    }
    else{
        Head=temp;
    }
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
    Node* head=NULL;
    InsertatTail(head,5);
    print(head);
    InsertatTail(head,10);
    print(head);
    
    return 0;
}