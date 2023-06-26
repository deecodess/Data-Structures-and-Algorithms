/* Finding Square Root */
#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    long long int mySqrt(int n){
    int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e){
            long long int sqr=mid*mid;
            if(sqr==n){
                return mid;
            }
            else if(sqr>n){
                e=mid-1;
            }
            else{
                s=mid+1;
                ans=mid;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.mySqrt(n);
    return 0;
}