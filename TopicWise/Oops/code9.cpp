/* STL */
/* Hashing */
#include <iostream>
using namespace std;
int main(){
    hash <int> hash_int;
    int x;
    cout<<"Kindly give any number:";
    cin>>x;
    cout<<"Hash Key is: "<<hash_int(x)<<endl;
}