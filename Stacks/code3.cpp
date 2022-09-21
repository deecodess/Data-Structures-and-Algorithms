/* Stack using a LinkedList*/
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
bool isEmpty(Node* top){
    return top==NULL;
}

Node* peek( Node* top){
    if(!isEmpty(top)){
        return top;
    }
    else{
        return NULL;
    }
}
void push(Node* &top, int x){
    Node* temp = new Node(x);
    temp->next=top;
    top=temp;
}
void pop(Node* &top){
    if(!isEmpty(top)){
        Node *temp=top;
        top=top->next;
        delete temp;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}
void print(Node* top){
    if(!isEmpty(top)){
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}

int main(){
    Node* top=NULL;
    push(top,1);
    push(top,2);
    push(top,3);
    push(top,4);
    push(top,5);
    print(top);
    pop(top);
    print(top);
    pop(top);
    print(top);
    pop(top);
    print(top);
    pop(top);
    print(top);
    pop(top);
    print(top);
    pop(top);
    print(top);
    return 0;
}