/* Print the row wise sum of an 2d array */
#include <iostream>
using namespace std;
void printSum(int arr[][4],int row, int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printSum(arr,3,4);
}