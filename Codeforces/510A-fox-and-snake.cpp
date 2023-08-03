#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,flag=0;
    cin>>n>>m;
    vector<vector<char>>matrix(n,vector<char>(m,'.'));
    for(int row=0;row<n;row++){
        if(row%2==0){
            for(int col=0;col<m;col++){
                matrix[row][col]='#';
            }
        }
        if(row%2!=0){
            if(flag==0){
                matrix[row][m-1]='#';
                flag=1;
            }
            else{
                matrix[row][0]='#';
                flag=0;
            }
        }
        
    }
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout<<matrix[row][col];
        }
        cout<<endl;
    }
}