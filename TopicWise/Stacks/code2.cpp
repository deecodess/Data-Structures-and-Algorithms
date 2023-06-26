/* Stack using STL */
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"The element present in stack is : "<<s.top()<<endl;
    cout<<"The size of stack is : "<<s.size()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"The Stack is not empty"<<endl;
    }
}