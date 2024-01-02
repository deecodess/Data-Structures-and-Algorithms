#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f(0),j,cnt(0);
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] < 0){
				++cnt;
				j = i;
			}
			if(v[i] == 0) f = 1;
        }
        if(cnt % 2 || f) cout << 0 << endl;
		else{
			cout << 1 << endl;
			cout << 1 << ' ' << 0 << endl;
		}
    }
}