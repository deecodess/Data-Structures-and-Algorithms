/* Insert in the middle of Linked List */
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
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<< "memory is free for node with data "<<value<<endl;
    }
};

void print(Node* Head){
    Node* temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void InsertAtHead(Node* &Head, int d){
    //new node create
    Node* Temp=new Node(d);
    Temp->next=Head;
    Head=Temp;
}
void InsertAtTail(Node* &Tail, int d){
    //new node create
    Node* Temp=new Node(d);
    Tail->next=Temp;
    Tail=Temp;
}

void InsertAtPosition( Node* &Tail, Node* &Head, int d, int pos){
    if(pos==1){
        InsertAtHead(Head, d);
        return;
    }

    Node* Temp=Head;
    int cnt=1;
    while(cnt<pos-1){
        Temp=Temp->next;
        cnt++;
    }
}

void deleteNode(int position, Node* &head){
    if(position==1){
        Node* temp = head;
        head = head-> next;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        
    }
}


int main(){
    Node* node1 = new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    print(head);

    InsertAtHead(head,5);
    print(head);

    InsertAtPosition(tail,head,5,24);
    print(head);
    
    return 0;
}