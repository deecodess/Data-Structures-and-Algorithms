#include <iostream>
using namespace std;

void towersofhanoi(int n, char from_rod, char aux_rod, char to_rod){
    if(n==1){
        cout<<"Move disk 1 from "<<from_rod<<" to "<<to_rod<<endl;
    }
    else{
        towersofhanoi(n-1, from_rod, to_rod, aux_rod);
        cout<<"Move disk "<<n<<" from "<<from_rod<<" to "<<to_rod<<endl;
        towersofhanoi(n-1, aux_rod, from_rod, to_rod);
    }
}
int main(){
    int n;
    cin>>n;
    towersofhanoi(n, 'A', 'B', 'C');
    return 0;
}