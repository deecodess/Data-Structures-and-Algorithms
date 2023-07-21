class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // int m=nums1.size();
        // int n=nums2.size();
        // vector<int>ans(m+n);
        // int i=0,j=0;
        // while(i<m && j<n){
        //     if(nums1[i]<nums2[j]){
        //         ans.push_back(nums1[i]);
        //         i++;
        //     }
        //     else if(nums1[i]==nums2[j]){
        //         ans.push_back(nums1[i]);
        //         i++;
        //         ans.push_back(nums2[j]);
        //         j++;
        //     }
        //     else{
        //         ans.push_back(nums2[j]);
        //         j++;
        //     }
        // }
        // while(i<m){
        //     ans.push_back(nums1[i]);
        //         i++;
        // }
        // while(j<n){
        //     ans.push_back(nums2[j]);
        //         j++;
        // }
        // double aa;
        // int mid=(0+n+m)/2;
        // cout<<mid;

        // if((n+m)%2==0){
        // aa=(double)(ans[mid]+ans[mid-1])/2;

        // }
        // else if((n+m)%2!=0){
        //     aa=(double)ans[mid];
        // }
        // return aa;
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        int lastindex=-1;
             
        // Initialize a new array
           vector<int>v(n1+n2,0);
        
        while(i<n1&&j<n2)
        {
            if(nums1[i]<=nums2[j])
                v[++lastindex]=nums1[i++];
            else
                v[++lastindex]=nums2[j++];
        }
        
        while(i<n1)
            v[++lastindex]=nums1[i++];
        while(j<n2)
            v[++lastindex]=nums2[j++];
        
    // Return the result
        int n=n1+n2;
        return n%2?v[n/2]:(v[n/2]+v[n/2-1])/2.0;
    }
};