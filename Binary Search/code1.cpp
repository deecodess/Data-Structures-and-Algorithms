/* Binary Search */
#include <iostream>
using namespace std;
int binarySearch(int a[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(a[mid]==key){
            cout<<"Found at position: "<<mid;
            return mid;
        }
        else if(a[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9};
    int index = binarySearch(even,6,12);
    cout<<"Index of 12 is: "<<index<<endl;
}