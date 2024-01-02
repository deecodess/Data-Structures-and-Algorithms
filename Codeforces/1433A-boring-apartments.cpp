#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; //777
        cin>>n;
        string s=to_string(n);
        int x=stoi(s.substr(0,1));
        int sum=0;
        sum+=((x-1)*10); //60
        int len=s.length(); //3
        sum+=len;
        while(len--){
            sum+=len; 
        }
    cout<<sum<<endl;
    }
}