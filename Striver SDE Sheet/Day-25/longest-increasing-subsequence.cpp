class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int maxi=0;
        int inc=1;
        vector<int> dp(nums.size());
        if(nums.size()==1) return 1;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                 if(nums[i]>nums[j]){
                dp[i]=max(dp[i],dp[j]+1);
                 }
                 maxi=max(maxi,dp[i]);
            }
           
            
        }
        return maxi+1;
    }
};