#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(a!=b)
    {
        if(a> b)
            a -= b;
        else
            a -= b;
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==1)cout<<b*b<<endl;
        else{
            long long div=b/a;
            long long ans=(a*b)/gcd(a,b);
            if(ans==b)cout<<ans*(div)<<endl;
            else cout<<ans<<endl;
        }
    }
}