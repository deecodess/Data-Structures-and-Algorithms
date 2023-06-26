#include<iostream>
using namespace std;
class Node
{ 
public:
    int data;
    Node *next;
    Node (int x){
        this->data=x;
        this->next=NULL;
    }
};
int size(Node *front,Node *rear){
    Node *temp=front;
    int count=0;
    while(temp!=rear){
        temp=temp->next;
        count++;
    }
    return count;
}
bool isEmpty(Node *front,Node *rear){
    if(front==NULL&&rear==NULL){
        return true;
    }
    else{
        return false;
    }
}
int peek(Node *front,Node *rear){
    if(isEmpty(front,rear)){
        return 0;
    }
    else{
        return front->data;
    }

}
void enqueue(Node *&front,Node *&rear, int x){
    Node*n1=new Node(x);    
	if(isEmpty(front,rear)){
        front=n1;
        rear=n1;
    }
    else{
        rear->next=n1;
        rear=n1;
    }
}
void dequeue(Node *&front,Node *&rear){
    if(isEmpty(front,rear)){
        cout<<"Queue Underflow"<<endl;
    }
    else{
        Node*n1=front;
        front=front->next;
        delete n1;
    }
}
void print(Node *front,Node *rear){
    if(isEmpty(front,rear)){
        cout<<"Queue Underflow"<<endl;
    }
    else{
        Node *temp=front;
        while(temp!=rear){
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }
}
int main(){
    Node* front=NULL;
    Node* rear=NULL;
    enqueue(front,rear,7);
    print(front,rear);
    peek(front,rear);
    print(front,rear);
    dequeue(front,rear);
    print(front,rear);
    dequeue(front,rear);
    print(front,rear);
    isEmpty(front,rear);
    print(front,rear);
    enqueue(front,rear,9);
    print(front,rear);
    enqueue(front,rear,7);
    print(front,rear);
    size(front,rear);
    return 0;
}