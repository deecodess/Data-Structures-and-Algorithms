/* Reverse an array */
#include <iostream>
#include <math.h>

using namespace std;
void reverse(int a[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }

}
void print(int b[],int sz){
    for(int i=0;i<sz;i++){
        cout<<b[i]<<" ";
    }
}
int main(){
    int arr[100];
    int size;

    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    cout<<"Enter elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(arr,size);
    print(arr,size);
}