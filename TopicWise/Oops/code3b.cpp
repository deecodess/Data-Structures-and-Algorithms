#include<iostream>
using namespace std;
class test{
    int a,b;
    public:
        void getdata(int a,int b){
            this->a=a;
            this->b=b;
        }
        void display(){
            cout<<a<<endl;
            cout<<b<<endl;
        }
        test operator ++(int){ //int will not come for pre increment
            test h;
            h.a=a++;
            h.b=b++;
            return h;
        }
};
int main(){
    test t1;
    t1.getdata(5,24);
    t1++;
    t1.display();
    return 0;;
}