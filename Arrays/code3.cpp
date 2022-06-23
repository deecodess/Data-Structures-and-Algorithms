/* Linear Search in array */
#include <iostream>
using namespace std;
bool search(int arr[],int sz,int n){
    for(int i=0;i<sz;i++){
        if(arr[i]==n)
            return true;
    }
    return 0;
}
int main(){
    int a[10];
    for (int i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"Enter a key please: "<<endl;
    int key;
    cin>>key;
    bool found = search(a,10,key);
    if(found==true)
        cout<<"The Key is present"<<endl;
    else
        cout<<"The Key is absent"<<endl;
}