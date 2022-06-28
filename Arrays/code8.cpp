/*Find intersection of two arrays */
#include <iostream>
#include <vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0,j=0;
    vector <int> ans;
    while(i<n && j<m){
        if(arr1[i]<arr2[j])
            i++;
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        if(arr1[i]>arr2[j])
            j++;
    }
    return ans;
}
int main(){
    vector <int> arr1;
    vector <int> arr2;
    int x;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>x;
        arr1.push_back(x);
    }
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>x;
        arr2.push_back(x);
    }
    vector <int> ans=findArrayIntersection(arr1,arr1.size(),arr2,arr2.size());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

