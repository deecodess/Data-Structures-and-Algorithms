class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x=0,l=0,h=nums.size()-1;
        while(x<=h){
            if(nums[x]==0){
                swap(nums[x],nums[l]);
                l++;
                x++;
            }
            else if(nums[x]==2){
                swap(nums[x],nums[h]);
                h--;
            }
            else{
                x++;
            }
        }
    }
};