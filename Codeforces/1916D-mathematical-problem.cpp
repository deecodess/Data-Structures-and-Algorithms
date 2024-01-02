#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;

// Function to check if two numbers have the same digit frequency.
bool haveSameDigits(long long a, long long b) {
    unordered_map<char, int> freqA, freqB;
    for (char digit : to_string(a)) freqA[digit]++;
    for (char digit : to_string(b)) freqB[digit]++;
    return freqA == freqB;
}

// Main function to find the numbers.
vector<long long> findNumbers(int n) {
    vector<long long> result;
    long long start = pow(10, n / 2);
    long long end = pow(10, n / 2 + 1);

    for (long long i = start; i < end; ++i) {
        long long square = i * i;
        if (to_string(square).length() != n) continue;

        if (result.empty() || haveSameDigits(result[0], square)) {
            result.push_back(square);
            if (result.size() == n) break;
        }
    }
    return result;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;

        vector<long long> numbers = findNumbers(n);
        if (numbers.size() != n) {
            cout << -1 << endl;
        } else {
            for (long long num : numbers) {
                cout << num << endl;
            }
        }
    }
    return 0;
}
