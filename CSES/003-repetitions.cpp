#include <iostream>
#include <string>
#include <climits>
#define ll long long
using namespace std;

int main(){
    string s;
    cin>>s;
    ll sum=1;
    ll maxi=1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            sum++;
        }
        else{
            sum=1;
        }
        maxi=max(sum,maxi);
    }
    cout<<maxi<<endl;
}