/* pure virtual functions */
#include <iostream>
using namespace std;
class Enemy {
    public:
        virtual void power()=0;
//whenever you write pure virtual functions, you need to override it.
//Class containing a pure virtual function is known as abstract class.

};
class Thanos:public Enemy{
    public:
        void power(){
            cout<<"I snap!!"<<endl;
        }
};
class Dormamu:public Enemy{
    public:
        void power(){
            cout<<"I bargain!!"<<endl;
        }
};
int main(){
    Thanos T;
    Dormamu D;
    Enemy *E1=&T;
    Enemy *E2=&D;
    E1->power();
    E2->power();
    return 0;
}