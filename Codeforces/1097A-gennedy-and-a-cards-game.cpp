#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1,s2,s3,s4,s5;
    cin>>s1>>s2>>s3>>s4>>s5;
    for(int i=0;i<2;i++){
        if(s[i]==s1[i] || s[i]==s2[i] || s[i]==s3[i] || s[i]==s4[i] || s[i]==s5[i]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}