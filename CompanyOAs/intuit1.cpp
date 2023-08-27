/* In a matrix of m*n, if fire starts from (a,b) and a person starts from (x,y). Both can move horizontally or vertically one step per second. Write a cpp code to find if the person will reach (p,q) without catching fire.
Sample Input: m=6,n=6,t=1,a=2,b=3,x=1,y=1,p=0,q=1
Sample Output: "YES"*/
#include <iostream>
#include <vector>
using namespace std;
void fire(vector<vector<int>>&matrix,int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==1)
            {
                if(matrix[i+1][j]!=2){
                    matrix[i+1][j]=1;
                }
                if(matrix[i-1][j]!=2){
                    matrix[i-1][j]=1;
                }
                if(matrix[i][j+1]!=2){
                    matrix[i][j+1]=1;
                }
                if(matrix[i][j-1]!=2){
                    matrix[i][j-1]=1;
                }
            }
        }
    }
}
void person(vector<vector<int>>&matrix,int px, int py,int dx,int dy){
    if(matrix[dx][dy]==2){
        cout<<"YES"<<endl;
        return;
    }
    fire(matrix,matrix.size(),matrix[0].size());
    if(matrix[px+1][py]!=1)person(matrix,px+1,py,dx,dy);
    if(matrix[px-1][py]!=1)person(matrix,px-1,py,dx,dy);
    if(matrix[px][py+1]!=1)person(matrix,px,py+1,dx,dy);
    if(matrix[px][py-1]!=1)person(matrix,px,py-1,dx,dy);

    cout<<"NO"<<endl;
}

    int main(){
        // int m(6),n(6),t(1);
        // vector<int>v={2,3,1,1,0,1};
        // int a=v[0],b=v[1],p=v[2],q=v[3],x=v[4],y=v[5];
        // vector<vector<int>>matrix(m,vector<int>(n,0));
        // matrix[a][b]=1;
        // matrix[x][y]=2;
        int m,n,t;
        cin>>m>>n>>t;
        while(t--){
            vector<int>v;
            for(int i=0;i<6;i++){
                int x;
                cin>>x;
                v.push_back(x);
            }
            int fx=v[0],fy=v[1],px=v[2],py=v[3],dx=v[4],dy=v[5];
            vector<vector<int>>matrix(m,vector<int>(n,0));
            matrix[fx][fy]=1; //fire
            matrix[px][py]=2; //person
            person(matrix,px,py,dx,dy);
        }
        

    }
