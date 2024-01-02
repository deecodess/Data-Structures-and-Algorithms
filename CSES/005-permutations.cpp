#include <iostream>
#include <climits>
#include <vector>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=1;i<=n;i++){
        v[i-1]=i;
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            ans.push_back(v[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]%2!=0){
            ans.push_back(v[i]);
        }
    }
    if(n==1) cout<<1<<endl;
    else if(n>3){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO SOLUTION"<<endl;
    }
}