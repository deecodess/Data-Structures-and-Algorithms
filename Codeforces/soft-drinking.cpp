#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int x=(k*l)/(nl*n);
    int y=p/(np*n);
    int z=(c*d)/n;
    
    cout<<min(x,min(y,z))<<endl;
    return 0;
}