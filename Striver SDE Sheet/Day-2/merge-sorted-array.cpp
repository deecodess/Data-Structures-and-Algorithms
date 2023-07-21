class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int t=m+n;
        int gap;
        if(gap%2==0) gap=(m+n)/2; // even
        else gap=(m+n+1)/2;     //odd
        for(gap;gap>0;gap/=2){
            for(int i=0;i<t;i++){
                if(nums1[i])
            }
        }
    }
};