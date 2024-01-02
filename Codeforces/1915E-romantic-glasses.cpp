#include<bits/stdc++.h>
using namespace std;
void checkval(vector<int>v,int n){
    vector<int>ans(n);
    int val=0;
        for(int j=0;j<n;j++){
            ans[j]=(val*2)+3;
        }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        checkval(v,n);
        map<int,int>mp;
        mp[0]=1;
        int cursum=0,f=0;
        for(int i=0;i<n;i++){
            if(i%2==0)cursum+=v[i];
            else cursum-=v[i];
            if(mp[cursum]){
                f=1;
            }
            else mp[cursum]++;
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}