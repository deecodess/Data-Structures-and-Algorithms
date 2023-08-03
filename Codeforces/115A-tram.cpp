#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int exit(0),entry(0),maxi(0),sum(0);
    while(n--){
        cin>>exit>>entry;
        sum-=exit; //1
        sum+=entry; //6
        maxi=max(maxi,sum); //6
    }
    cout<<maxi<<endl;
    return 0;
}