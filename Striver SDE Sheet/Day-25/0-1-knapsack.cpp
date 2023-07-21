class Solution
{
    public:
    
    int yayknap(vector<int> &wt,vector<int> &val,int ind,int W,vector<vector<int>>&dp){
          if(ind == 0){
        if(wt[0] <=W) return val[0];
        else return 0;
    }
    
    if(dp[ind][W]!=-1)
        return dp[ind][W];
        
    int notTaken = 0 + yayknap(wt,val,ind-1,W,dp);
    
    int taken = INT_MIN;
    if(wt[ind] <= W)
        taken = val[ind] + yayknap(wt,val,ind-1,W-wt[ind],dp);
        
    return dp[ind][W] = max(notTaken,taken);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>>dp (n, vector<int>(W+1,-1));
        vector<int>weight(n,-1);
        vector<int>values(n,-1);
        for(int i=0;i<n;i++){
            weight[i]=wt[i];
        }
        for(int i=0;i<n;i++){
            values[i]=val[i];
        }
        return yayknap(weight,values,n-1,W,dp);
        
    }
};