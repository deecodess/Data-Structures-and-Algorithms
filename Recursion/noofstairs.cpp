#include <iostream>
using namespace std;

int countDistinctWays(int nStairs) {
    
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    int ans = countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<countDistinctWays(n);
    return 0;
}