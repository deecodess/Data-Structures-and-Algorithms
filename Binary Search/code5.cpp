/* Search in rotated sorted array */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int s=0;
    int e=n-1;
    
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==k)
            return mid;
        
        if(arr[0]<=arr[mid]){
            if(arr[0]<=k && arr[mid]>k){
                e=mid-1;
            }
            else{
                s=mid+1;        
            }
        }
        else{
            if(k<=arr[n-1] && arr[mid]<k){s=mid+1;}
            else{e=mid-1;}
        }
    }
    return-1;
    }
int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int k;
    cin>>k;
    cout<<findPosition(arr,n,k);
    return 0;
}

