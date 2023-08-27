/*Bob is working on a project where he has to build N buildings having exactly K floors. Each day, he groups buildings with same number of floors and then within each group where buildings below the K floors are present, he chose exactly one building and add one floor onto it. You know the number of floors present in a building. Determine the number of days that are needed to have exactly K floors for all buildings. 
Sample Input: 4 4
Sample Output: 1 2 2 3
*/
#include <iostream>
#include <vector>

using namespace std;

int minimumNumberOfDays(int k, vector<int> arr) {
    int n = arr.size();
    int days = 0;
    
    while (true) {
        int buildingsWithLessThanK = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < k) {
                buildingsWithLessThanK++;
                arr[i]++;
            }
        }
        
        if (buildingsWithLessThanK == 0)
            break;
        
        days++;
    }
    
    return days;
}

int main() {
    int k = 4;
    vector<int> arr = {1, 2, 2, 3};
    
    int result = minimumNumberOfDays(k, arr);
    cout << result << endl; // Output: 4
    
    return 0;
}
