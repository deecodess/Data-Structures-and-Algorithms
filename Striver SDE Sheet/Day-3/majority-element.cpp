class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int candi=0;

        for(int i=0;i<nums.size();i++){
            if(count==0)
                candi=nums[i];
            if(nums[i]==candi) count+=1;
            else count-=1;
        }
        return candi;
    }
};