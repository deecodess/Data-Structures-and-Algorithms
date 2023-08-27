/* */
#include <iostream>
#include <vector>
using namespace std;
int approach(vector<int>& cand, vector<int>& money, int ind, int W, vector<vector<int>>& dp){

    if(ind == 0){
        if(cand[0] <=W) return money[0];
        else return 0;
    }
    
    if(dp[ind][W]!=-1)
        return dp[ind][W];
        
    int notTaken = 0 + approach(cand,money,ind-1,W,dp);
    
    int taken = INT_MIN;
    if(cand[ind] <= W)
        taken = money[ind] + approach(cand,money,ind-1,W-cand[ind],dp);
        
    return dp[ind][W] = max(notTaken,taken);
}
int solve(int c,vector<int>candy, vector<int>money, vector<vector<int>>pairs){
    int n=candy.size();
    vector<vector<int>> dp(n,vector<int>(c+1,-1));

    return approach(candy, money, n-1, c, dp);
}
int main(){
    int n(10),c(10);
    vector<int>candy={2,2,3,3,2,3,1,3,3,2};
    vector<int>money={1,6,3,3,8,4,8,10,1,3};
    vector<vector<int>>pairs={{1,2},{2,3},{3,4}};
    cout<<solve(c,candy,money,pairs);
}