class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) sum++;
            maxi=max(maxi,sum);
            if(nums[i]==0) sum=0;
        }
        return maxi;
    }
};