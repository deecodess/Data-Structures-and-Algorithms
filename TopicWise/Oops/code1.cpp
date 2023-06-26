#include<iostream>
using namespace std;
/* creating a class */
class enemy{
    protected:
        int attackPower;
    public:
        /* setter function*/
        void setAttackPower(int a){
            attackPower=a;
        }
};
/* deriving a class publicly */
class ninja: public enemy{
    public:
        void attack(){
            cout<<"I am a ninja,ninja chop!!"<<attackPower<<endl;
        }

};
class monster: public enemy{
    public:
        void attack(){
            cout<<"monster must eat you!!"<<attackPower<<endl;
        }
};

int main(){
    /* declaring an object for derived classes*/
    ninja n;
    monster m;
    
    enemy *enemy1= &n;
    enemy *enemy2= &m;
    enemy1->setAttackPower(69);
    enemy2->setAttackPower(71);
    n.attack();
    m.attack();
}