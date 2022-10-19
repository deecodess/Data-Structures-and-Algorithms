/* Queues using Linked List*/
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
int size(Node* front, Node* rear){
    int count=0;
    Node* temp = front;
    while(temp!=rear){
        count++;
        temp=temp->next;
    }
    return count;
}
bool isEmpty(Node* front, Node* rear){
    return front==NULL;
}
Node *peek(Node* front, Node* rear){
    if(!isEmpty(front,rear)){
        return front;
    }
    else{
        return NULL;
    }
}
void enqueue(Node* &rear, Node* &front, int x){
    Node* temp = new Node(x);
    if(isEmpty(front,rear)){
        front=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
void dequeue(Node* &rear,Node* &front){
    if(!isEmpty(front,rear)){
        Node *temp=front;
        if(front==rear){
            front=NULL;
            rear=NULL;
        }
        else{
            front=front->next;
            delete temp;
        }
    }
    else{
        cout<<"Queue underflow"<<endl;
    }
}
void print(Node* front, Node* rear){
    if(!isEmpty(front,rear)){
        Node* temp = front;
        while(temp!=rear){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    else{
        cout<<"Queue Underflow"<<endl;
    }
}

int main(){
    Node* front=NULL;
    Node* rear=NULL;
    enqueue(rear,front,7);
    print(rear,front);
    peek(rear,front);
    print(rear,front);
    dequeue(rear,front);
    print(rear,front);
    dequeue(rear,front);
    print(rear,front);
    isEmpty(rear,front);
    print(rear,front);
    enqueue(rear,front,9);
    print(rear,front);
    enqueue(rear,front,7);
    print(rear,front);
    size(rear,front);
}