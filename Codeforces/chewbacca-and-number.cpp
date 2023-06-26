#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]>'4') x[i]= '9'-x[i]+'0';
    }
    if(x.front()=='0') x.front()='9';
    cout<<x<<endl;
    return 0;
}