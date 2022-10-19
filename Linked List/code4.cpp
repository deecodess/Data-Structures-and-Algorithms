/* Deletion in singly Linked List */
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
void DeleteAtHead(Node* &Head){
    Node* Temp=Head;
    Head=Head->next;
    delete Temp;
}
void DeleteAtTail(Node* &Head){
    Node* Temp=Head;
    while(Temp->next->next!=NULL){
        Temp=Temp->next;
    }
    delete Temp->next;
    Temp->next=NULL;
}
void DeleteAtPosition(Node* &Head, int pos){
    if(pos==1){
        DeleteAtHead(Head);
        return;
    }
    Node* Temp=Head;
    int cnt=1;
    while(cnt<pos-1){
        Temp=Temp->next;
        cnt++;
    }
    Node* Temp1=Temp->next;
    Temp->next=Temp1->next;
    delete Temp1;
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

    InsertAtTail(tail,24);
    print(head);

    DeleteAtHead(head);
    print(head);

    DeleteAtTail(head);
    print(head);

    DeleteAtPosition(head,2);
    print(head);

    
    return 0;
}