/* finding maximum and minimum elements of an array */
#include <iostream>
using namespace std;

int getMIN(int arr[],int sz){
    int min=INT_MAX;
    for(int i=0;i<sz;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int getMAX(int arr[],int sz){
    int max=INT_MIN;
    for(int i=0;i<sz;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum Value: "<<getMAX(num,size)<<endl;
    cout<<"Minimum Value: "<<getMIN(num,size)<<endl;

}