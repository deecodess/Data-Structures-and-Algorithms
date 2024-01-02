#include<bits/stdc++.h>
using namespace std;
bool isVowel(char x){
    if(x=='a'|| x=='e')return true;
    else return false;
}
bool isConsonent(char x){
    if(x=='b'|| x=='c'|| x=='d')return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        for(int i=0;i<n-2;i++){
            ans+=s[i];
            if(isConsonent(s[i])&& isConsonent(s[i+1]))ans+='.';
            if(isVowel(s[i]) && isConsonent(s[i+1])&& isVowel(s[i+2]))ans+='.';
        }
        ans+=s[n-2];
        ans+=s[n-1];
        cout<<ans<<endl;
    }
}