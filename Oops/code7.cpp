/* Data Conversions
    Basic to UDT
    Done with Constructor with one arguement of basic type*/
#include <iostream>
using namespace std;

class Cel{
    float c;
    public:
        Cel(){c=0;}
        Cel(float f){c=(f-32)* 5/9;}

        void show(){
            cout<<"Celsius: "<<c<<endl;
        }
};
int main(){
    Cel cvalue(50);
    float f;
    cout<<"Farenheit: "<<endl;
    cin>>f;
    cvalue=f; // conversion
    cvalue.show();
    return 0;
}
