/* Move zeroes to one side of an array */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     vector <int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }
};
int main() {
    Solution s;
    vector<int> nums={1,2,3,4,5};
    s.rotate(nums,2);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
