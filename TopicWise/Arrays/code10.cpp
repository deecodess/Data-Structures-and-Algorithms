/* Check if array is sorted and rotated */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])
                count++;
        }
        if(nums[n-1]>nums[0])
            count++;
        
        return count<=1;
    }
};
int main() {
    Solution s;
    vector<int> nums={1,2,3,4,5};
    cout<<s.check(nums);
    return 0;
}
