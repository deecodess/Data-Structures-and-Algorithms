/* Find peak in Mountain Array */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }return s;
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
    cout<<s.peakIndexInMountainArray(arr);
    return 0;
}