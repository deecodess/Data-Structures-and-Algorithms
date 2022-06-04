/* Template class */
#include <iostream>
using namespace std;
template <class T>
class Test{
    T var;
    public:
        Test(T i){var=i;}
        T divideby2(){return var/2;}
};
int main(){
    Test<int>t1(50);
    Test<double>t2(-10.33);
    cout<<t1.divideby2()<<","<<t2.divideby2()<<endl;
    return 0;
}
