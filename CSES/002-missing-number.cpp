#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n-1);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    ll sum2=0;
    for(int i=0;i<n;i++){
        sum2+=v[i];
    }
    cout<<sum-sum2<<endl;
}