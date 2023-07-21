class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int p1=1;
        int p2=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            p1*=nums[i];
            p2*=nums[nums.size()-1-i];
            maxi=max(maxi,max(p1,p2));
            if(p1==0) p1=1;
            if(p2==0) p2=1;
        }
        return maxi;
    }

};