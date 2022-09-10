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

void InsertAtTail(Node* &Tail, int d){
    //new node create
    Node* Temp=new Node(d);
    Tail->next=Temp;
    Tail=Temp;
}

void print(Node* Tail){
    Node* temp=Tail;
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

    Node* Tail=node1;
    print(Tail);

    InsertAtTail(Tail,5);
    print(Tail);

    InsertAtTail(Tail,24);
    print(Tail);
    
    return 0;
}