#include <iostream>
#include<vector>
using namespace std;
void fun(int ind, int num, vector<int>&v, vector<int>&ans){
    if(ind==v.size()) return;
    for(int i=0;i<v.size();i++){
        if(v[i]==num){
            //index=i, i=4;
            ans[num]=i; //ans[1]=4
        }
    }
    return fun(ind+1,num+1,v,ans);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    v[0]=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    //2 3 4 1
    vector<int>temp(n+1);
    temp[0]=0;
    for(int i=1;i<=n;i++){
        temp[i]=v[i];
    }   
    //1->2 2->3 3->4 4->1   4 1 2 3
    // 1->index->4->go to index 1->place 4
    fun(1,1,v,temp);
    for(int i=1;i<=n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}