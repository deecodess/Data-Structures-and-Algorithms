/* Finding floats in square root */
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
double morePrecision(int n, int precision,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    Solution s;
    int n;
    int precision;
    cin>>n;
    cin>>precision;
    long long int tempSol=s.mySqrt(n);
    double ans=morePrecision(n,precision,tempSol);
    cout<<ans;
    return 0;
}