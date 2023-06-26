#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        if(n<10){
            ans.push_back(n);
        }
        else{
            vector<int>number;
            int temp=n;
            while(temp>0){
                number.push_back(temp%10);
                temp/=10;
            }
            temp=n;
            for(int i=0;i<number.size();i++){
                if(number[i]!=0){
                    int q=(number[i]*pow(10,i));
                ans.push_back(q);
                temp-=q;
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}