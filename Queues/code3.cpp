#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class MyCircularQueue {
public:
    vector <int> v;
    int front=-1;
    int rear=-1;
    int n;
    MyCircularQueue(int k) {
        n=k;
        v.reserve(n);
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        else{
            rear=(rear+1)%n;
            v[rear]=value;
            if(front==-1)
                front=0;
            return true;
        }         
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        else if(front==rear){
            front=rear=-1;
            return true;
        }
        else{
            front=(front+1)%n;
            return true;
        }
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        else
            return v[front];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        else
            return v[rear];
    }
    
    bool isEmpty() {
        return front==-1;
    }
    
    bool isFull() {
        return (front==(rear+1)%n);
    }
};

int main(){
    MyCircularQueue* obj = new MyCircularQueue(3);
    bool param_1 = obj->enQueue(1);
    bool param_2 = obj->enQueue(2);
    bool param_3 = obj->enQueue(3);
    bool param_4 = obj->enQueue(4);
    int param_5 = obj->Rear();
    bool param_6 = obj->isFull();
    bool param_7 = obj->deQueue();
    bool param_8 = obj->enQueue(4);
    int param_9 = obj->Rear();
    return 0;
}