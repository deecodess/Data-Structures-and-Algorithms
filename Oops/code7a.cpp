/*UDT to Basic 
    Done by overloading the cast operator of basic type such as member function */
#include <iostream>
using namespace std;
class Celsius{
    float temper;
    public:
        void getdata(){
            cin>>temper;
        }
        operator float(){
            float fer=temper *9/5 + 32;
            return fer;
        }
};
int main(){
    Celsius cel;
    cel.getdata();
    float fer=cel; //UDT to basic conversion
    cout<<fer;
    return 0;
}