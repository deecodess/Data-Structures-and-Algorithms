#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>>v(3,vector<char>(3,0));
        int a(0),b(0),c(0);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>v[i][j];
                if(v[i][j]=='A')a++;
                if(v[i][j]=='B')b++;
                if(v[i][j]=='C')c++;
            }
        }
        if(min(a,min(b,c))==a)cout<<'A'<<endl;
        if(min(a,min(b,c))==b)cout<<'B'<<endl;
        if(min(a,min(b,c))==c)cout<<'C'<<endl;
    }
}