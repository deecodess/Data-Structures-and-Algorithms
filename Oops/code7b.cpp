/* UDT to UDT Conversion
    Overloading the cast operator is done, typecasting, just like UDT to basic*/
#include<iostream>
#include<math.h>
using namespace std;
class Cartesian{
    float xco,yco;
    public:
        Cartesian(float x=0,float y=0){
            xco=x;
            yco=y;
        }
        void display(){
            cout<<xco<<yco;
        }
};
class Polar{
    float r,a;
    public:
        Polar(float r1=0,float a1=0){
            r=r1;
            a=a1;
        }
        operator Cartesian(){
            float x=r*cos(a);
            float y=r*sin(a);
            return Cartesian(x,y);
        }
        void display(){
            cout<<r<<a;
        }
};

int main(){
    Polar pol(10.0,0.78);
    Cartesian cart=pol;
    cart.display();
    return 0;
}
