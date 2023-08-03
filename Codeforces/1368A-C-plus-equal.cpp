#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int count(0),count2(0);
        int smol=min(a,b);
        int big=max(a,b);
        while(smol<=n && big<=n){
            if(smol<big){
                smol+=big;
            }
            else{
                big+=smol;
            }
            count++;
        }

        cout<<count<<endl;
    }
    return 0;
}