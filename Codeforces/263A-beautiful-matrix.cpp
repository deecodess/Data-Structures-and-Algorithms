#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>matrix(5,vector<int>(5));
    int p;
    int r,c;
    for(int row=0;row<5;row++){
        for(int col=0;col<5;col++){
            cin>>matrix[row][col];
            if(matrix[row][col]==1){
                r=row;
                c=col;
            }
        }
    }
    cout<<abs(2-r)+abs(2-c)<<endl;
    return 0;
}