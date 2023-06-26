/* Operator Overloading */

#include <iostream>
#include <string>
using namespace std;

class Complex{
    public: 
        int x,y;
        void inp(){
            cout<<"Input two numbers:"<<endl;
            cin>>x>>y;
        }
    
};
Complex operator +(const Complex n, const Complex m ){
        Complex A;
        A.x=n.x+m.x;
        A.y=n.y+m.y;
        return A;
    }
    ostream& operator <<(ostream& os, const Complex h){
        os<<h.x<<"+"<<"i"<<h.y;
        return os;
    }
int main(){
    Complex C1;
    Complex C2;
    C1.inp();
    C2.inp();
    cout<<C1+C2<<endl;
    return 0;

}