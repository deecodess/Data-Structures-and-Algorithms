#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> hellohello;
void checkval(vector<pair<ll,ll>>v,int n){
    vector<vector<int>>ans(n,vector<int>(n,0));
    int val=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=(val*2)+3;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> paths;
        hellohello endPoints;

        for (ll i = 0; i < n; ++i) {
            ll start, end;
            cin >> start >> end;
            paths.emplace_back(start, end);
        }

        sort(paths.begin(), paths.end());
        checkval(paths,n);
        ll greetings = 0;
        for (const auto& path : paths) {
            greetings += endPoints.size() - endPoints.order_of_key(path.second);
            endPoints.insert(path.second);
        }

        cout << greetings << endl;
    }
    return 0;
}
