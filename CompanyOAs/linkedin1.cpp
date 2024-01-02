#include <iostream>
#include <vector>
using namespace std;
int solve( vector<int>arr){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    vector<int> pre(n,0);
    vector<int> suff(n);
    pre[0]=0;
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i-1];
        suff[i]=sum-pre[i]-arr[i];
    }
    int ans=INT_MAX;
    int ind=0;
    for(int i=1;i<n-1;i++){
        if(pre[i]==suff[i]){
            if(arr[i]<ans){
                ans=arr[i];
                ind=i;
            }
        }
    }
    cout<<ind<<endl;
    return ind;
}

int main(){
    vector<int>arr={1,2,3,3};
    solve(arr);
    return 0;
}