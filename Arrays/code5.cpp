/* Swap Alterates */
#include <iostream>
using namespace std;
void alternates(int a[],int sz){
    for(int i=0;i<sz;i+=2){
        if(i+1<=sz){
            swap(a[i],a[i+1]);
        }
    }

}
void printarr(int a[],int sz){
    for(int i=0;i<sz;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int size;
    int a[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    alternates(a,size);
    printarr(a,size);
}