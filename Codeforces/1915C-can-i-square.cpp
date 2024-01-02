#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long long x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    
    return false;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,sum(0);
        cin>>n;
        vector<long long>v(n);
        for(long long  i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(isPerfectSquare(sum))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}