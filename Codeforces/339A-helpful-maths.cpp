#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.length();i++){
        if(s[i]!='+'){
            v.push_back(stoi(s.substr(i,1)));
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<to_string(v[i]);
        if(i!=v.size()-1) cout<<"+";
    }
}