/* First and Last Occurence of an element */
#include <iostream>
using namespace std;
int firstOcc(int a[],int n,int key){
    int start=0;
    int end=n-1;
    int mid = start +  (end-start)/2;
    int ans=-1;

    while(start<end){
        if(a[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int a[],int n,int key){
    int start=0;
    int end=n-1;
    int mid = start +  (end-start)/2;
    int ans=-1;

    while(start<end){
        if(a[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key<a[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter the element to search: ";
    cin>>key;
    int first = firstOcc(a,n,key);
    int last = lastOcc(a,n,key);
    if(first==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"First Occurence of "<<key<<" is at position: "<<first<<endl;
    }
    if(last==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Last Occurence of "<<key<<" is at position: "<<last<<endl;
    }  
}
