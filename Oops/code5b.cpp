/* Overloading function templates */
#include<iostream>
using namespace std;
template <class T1, class T2>
void show(T1 a,T2 b){
    cout<<a<<","<<b;
}
void show(int a, int b){
    cout<<"Integers playing this timee"<<endl;
}
int main(){
    show(100,"hello hello, kya voh ped hai!");
    show(6,9);
    return 0;
}