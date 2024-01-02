#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>ducks(n);
    for(int i=0;i<n;i++){
        cin>>ducks[i];
    }
    int i=0,order=1,count=m,removed=0;
    vector<int>cons(n,0);
    
    while (removed < n) {
        int skip = m - 1;
        while (skip > 0) {
            if (cons[i] == 0) { 
                skip--;
            }
            i = (i + 1) % n;
        }
        while (cons[i] != 0) { 
            i = (i + 1) % n;
        }
        cons[i] = order++; 
        removed++;
    }
    for(int i=0;i<n;i++){
        cout<<cons[i]<<" ";
    }
    cout<<endl;

}