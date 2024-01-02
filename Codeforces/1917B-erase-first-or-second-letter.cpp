#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
		set<char> ans;
		vector<int> v;
		for(int i = 0; i < n; ++i){
			ans.insert(s[i]);
            cout<<ans.size()<<endl;
			v.push_back(ans.size());
		}
		int sum = 0;
		for(int i = 0; i < v.size(); ++i) sum += v[i];
		cout << sum << endl;
	}
}
