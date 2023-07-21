class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxi=0;
        ans.push_back(nums[0]);
        for(int i = 1;i < nums.size();i++){
            if(ans.back() + 1 == nums[i]){
                ans.push_back(nums[i]);
                cnt++;
            }
            else if(ans.back()+1 != nums[i] && ans.back() != nums[i]){
                ans.clear();
                ans.push_back(nums[i]);
                maxi = max(maxi,cnt);
                cnt = 1;
            }
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};