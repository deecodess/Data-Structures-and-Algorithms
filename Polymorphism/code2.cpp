/* Virtual Function */
/*Member Function defined in Base Class but gets over-ridden in derived class.When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. */
/*Used to achieve RunTime Polymorphism and uses the keyword virtual */
#include <iostream>
using namespace std;

class enemy{
    /* virtual function declaration*/
    public:
        virtual void attack(){}
        void sing(){
            cout<<"When she sings, she sings come home"<<endl;
        }
        /*virtual void sing(){
            cout<<"When she sings, she sings come home"<<endl;
        }*/
};

class ninja: public enemy{
    public:
        void attack(){
            cout<<"I am a Ninja!!"<<endl;
        }
        void sing(){
            cout<<"Jab voh gaati hai to gaati hai ghar aao"<<endl;
        }
};

class monster: public enemy{
    public:
        void attack(){
            cout<<"I am a Monster!!"<<endl;
        }
        void sing(){
            cout<<"I dont sing :("<<endl;
        }
};

int main(){
    ninja n;
    monster m;
    enemy *enemy1=&n;
    enemy *enemy2=&m;
    enemy1->attack();
    enemy2->attack();
    enemy1->sing();
    enemy2->sing();

    return 0;
}