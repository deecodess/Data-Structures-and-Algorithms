#include<iostream>
#include<string.h>
using namespace std;
class test{
    char a[20];
    public:
        void getdata(){
            cout<<"Enter a string"<<endl;
            cin.getline(a, 20);
        }
        void display(){
            cout<< a <<endl;
        }
        test operator+(test t){
            test temp;
            strcat(a,t.a);
            strcpy(temp.a,a);
            return temp;
        }
};

int main(){
    test t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t1.display();
    t2.display();
    t3 = t1 + t2;
    t3.display();
    return 0;
}