/*Given an array, rotate the array to the right by k steps, where k is non-negative.*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int m = nums.size();
        vector<int> temp(m, 0);
        for (int i = 0; i <m;  i++)
        {
            temp[i] = nums[(i+k)%m];
        }
        
        for (int i = 0; i <m; i++)
        {
            nums[i] = temp[i];
        }
        
    }
};