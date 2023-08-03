#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int mini,maxi;
    maxi=max(x,max(y,z));
    mini=min(x,min(y,z));
    int p=(mini+maxi)/2;
    cout<<abs(p-mini)+abs(p-maxi)<<endl;
    return 0;
}