/* Linear Search in 2-d array */
#include <iostream>
using namespace std;

bool linearSearch(int arr[5][5], int target, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    
    int row, col;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;
    cout<<"Enter the number of columns: "<<endl;
    cin>>col;
    cout<<"Enter the elements of the array: "<<endl;
    int arr[5][5];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"Enter the target element: "<<endl;
    cin>>target;

    if(linearSearch(arr, target, row, col)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}