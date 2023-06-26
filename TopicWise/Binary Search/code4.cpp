/* Find Pivot Index */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int h=nums.size();
        for(int i=1;i<h;i++){
            nums[i]=nums[i-1]+nums[i];
        }
        for(int i=0;i<h;i++){
            int s,e;
            if(i==0){s=0;}
            else{s=nums[i-1];}
            if(i==h-1){e=0;}
            else{e=nums[h-1]-nums[i];}
            if(s==e){return i;}
        }
        return -1;
    }
};
int main(){
    Solution s;
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        arr.push_back(i);
    }
    cout<<s.pivotIndex(arr);
    return 0;
}