#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int count=1,max=1;
    for(int i=0;i<n-1;i++){
        if(v[i]<v[i+1]){
            count++;
            if(count>max) max=count;
        }
        else{
            count=1;
        }
    }
    cout<<max<<endl;
}