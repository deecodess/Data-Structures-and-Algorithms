#include <iostream>
using namespace std;
void sayDigits(int n, string array[]){
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    sayDigits(n,array);
    cout<<array[digit]<<" ";

}
int main(){
    int n;
    cin>>n;
    string arr[10]={ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    sayDigits(n,arr);
    cout<<endl<<endl<<endl;
    return 0;

}