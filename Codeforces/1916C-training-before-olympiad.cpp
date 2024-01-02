#include <bits/stdc++.h>
using namespace std;
long long solve(vector<long long>v, long long k,long long n){
    long long sum=0;
    long long odd=0;
    if(k==1)return v[0];
    for(long long i=0;i<k;i++){
        sum+=v[i];
        if(v[i]%2!=0)odd++;
        
    }
        long long div=odd/3;
        if(odd%3==1)div+=1;
        return sum-div;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1)cout<<v[0]<<endl;
        else{
            long long k=1;
            while(k<=n){
                cout<<solve(v,k,n)<<" ";
                k++;
            }
            cout<<endl;
        }
    }
    return 0;
}