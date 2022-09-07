#include <iostream>
using namespace std;
bool BinarySearch(int arr[],int s,int e, int k){
    int mid=s+(e-s)/2;
    if(mid==k){
        return true;
    }
    if(s>e){
        return false;
    }
    if(mid>k){
        return BinarySearch(arr,s,mid-1,k);
    }
    else{
        return BinarySearch(arr,mid+1,e,k);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(BinarySearch(arr,0,n-1,key)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}