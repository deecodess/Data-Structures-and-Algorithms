/* To print the sum of elements in an array */
#include <iostream>
using namespace std;
int arrSum(int arr[],int sz){
    int sum=0;
    for(int i=0;i<sz;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int a[100];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<< arrSum(a,size)<<endl;
    
}