#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,prod(1);
        cin>>n>>k;
        vector<long long>v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
            prod*=v[i];
        }
        if(2023%prod==0){
            cout<<"YES"<<endl;
            cout<<2023/prod<<" ";
            for(int i=1;i<=k-1;i++)cout<<1<<" ";
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
         
        
    }
    return 0;
}