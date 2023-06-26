/* Find Unique */
#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
        return ans;
}

int main(){
    int size;
    int arr[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<findUnique(arr, size);
}