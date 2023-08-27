#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //25
    int sum=0,count=0,level=0;
    int i=1;
    while(level<=n){
        sum+=i; //1,3,6,10,15,21
        level+=sum; //1,4,10,20,35,56
        i++;
        count++;
    }
    cout<<count-1<<endl;
    return 0;
}