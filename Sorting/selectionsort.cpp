#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.\
   
    for(int i=0;i<n-1;i++){
         int mini=i;
        for(int j=i+1;j<n;j++){
            //mini=min(arr[i],arr[j]);
            if(arr[j]<arr[mini])
                mini=j;
        }
        swap(arr[i],arr[mini]);
    }

}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}   