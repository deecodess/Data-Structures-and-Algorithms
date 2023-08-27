/* Given a subarrutation of length n , fing the number of subarrays of the given array having a mean value equal to x, for each x in the range 1 to n*/
#include <iostream>
#include <vector>

using namespace std;
vector<int> getPrefixSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> prefixSum(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + arr[i];
    }
    
    return prefixSum;
}
int solve(vector<int>& arr, int x) {
    int n = arr.size()-1;
    int count = 0;
    
    for (int l = 1; l <= n; ++l) {
        for (int i = 0; i <= n - l; ++i) {
            // int subarraySum = 0;
            int subarraySum =arr[i + l] - arr[i];
            double mean = (double)subarraySum / l;
            if (mean == x) {
                count++;
            }
        }
    }
    
    return count;
}

vector<int> getMeanRankCount(vector<int>& subarr) {
    vector<int> prefixSum = getPrefixSum(subarr);
    int n = subarr.size();
    vector<int> ans;
    
    for (int x = 1; x <= n; ++x) {
        int count = solve(prefixSum, x);
        ans.push_back(count);
    }
    
    return ans;
}

int main() {
    vector<int> subarrutation = {4,7,3,6,5,2,1};
    vector<int> ans = getMeanRankCount(subarrutation);
    
    for (int count : ans) {
        cout << count << " ";
    }
    
    return 0;
}
