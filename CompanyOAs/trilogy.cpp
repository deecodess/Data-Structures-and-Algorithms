#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int findAndSum(vector<int>arr, int n) {
    int sum = 0;
    int mul = 1;

    for (int i = 0; i < 3; i++) {
        bool count_on = 0;
        int l = 0;

        for (int j = 0; j < n; j++) {
            if ((arr[j] & (1 << i)) > 0) {
                if (count_on)
                    l++;
                else {
                    count_on = 1;
                    l++;
                }
            } else if (count_on) {
                sum += mul  * l * (l + 1) / 2;
                count_on = 0;
                l = 0;
            }
        }
        if (count_on) {
            sum += mul  * l * (l + 1) / 2;
            count_on = 0;
            l = 0;
        }
        mul *= 2;
    }
    return sum;
}

int bhothogya(vector<int>a,int l, int r){
    int an=1;
    int sum=0;
    for(int i=l;i<=r;i++){
        for(int j=l;j<=r;j++){
            an=a[i]&a[j];
            // cout<<an<<" ";
        }
        sum+=an;
    }
return sum;
}



vector<int> solve(int n, int q, vector<int>& a, vector<vector<int>>& b) {
    vector<int> sum;
    for (int i = 0; i < q; i++) {
        int l=b[i][1];
        int r=b[i][2];
        int v=b[i][3];
        if (b[i][0] == 1) {
            for (int j=l; j<=r; j++) {
                a[j] = v;
                
            }
        } else if (b[i][0] == 2) {
            for (int j=l; j<=r; j++) {
                a[j]=a[j]|v;
                
            }
        } else{
            // int su=bhothogya(a,l,r);
            int su=findAndSum(a,n);
           
            sum.push_back(su);
        }
    }
    return sum;
}
int main(){
    int n=5, q=5;
    // cin >> n >> q;
    // vector<int> a = {1, 0, 2, 5};
    // vector<vector<int>> b = {{3, 1, 3, 0}, {1, 1, 2, 4}, {2, 2, 4, 5}, {3, 1, 4, 0}};
    vector<int> a = {5,4,3,2,1};
    vector<vector<int>> b = {{3, 2, 4, 0}, {1, 1, 2, 8}, {2, 2, 4, 2}, {3, 1, 3, 0},{3,3,5,0}};
    vector<int> ans = solve(n,q,a,b);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
