class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1,i,j;
        for(i=n-1;i>=0;i--){
            if(nums[i]<nums[i+1])
                break;    
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(j=n;j>i;j--){
                if(nums[j]>nums[i]){
                    break;
                }
            }
            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};