#include <iostream>
using namespace std;
bool isSorted(int arr[], int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool ans = isSorted(arr+1, n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(isSorted(arr, n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}