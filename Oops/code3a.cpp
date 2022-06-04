#include <iostream>
using namespace std;
class test{
    int a,b,c;
    public:
        void getdata(int a,int b, int c){
            this->a=a;
            this->b=b;
            this->c=c;
        }
        void display(){
            cout<< a <<endl;
            cout<< b <<endl;
            cout<< c <<endl;
        }
        void operator - (){
            a=-a;
            b=-b;
            c=-c;
        }
        void operator ! (){
            a=!a;
            b=!b;
            c=!c;
        }
};
int main(){
    test t1;
    t1.getdata(10,-20,69);
    -t1;
    t1.display();
    test t2;
    t2.getdata(0,0,1);
    !t2;
    t2.display();
}